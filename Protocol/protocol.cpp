
#include "protocol.h"

 QQueue<uint8_t> RecvQueue;
// Protocol::Protocol(QWidget *parent)
//     : QWidget{parent}
// {

// }
 Protocol::Protocol(void)
 {
    frame_arr = new QByteArray();
     // connect(this, SIGNAL(DialSwRead(A0_CMD_t*)), this, SLOT(UpdateAds8326Vol(A0_CMD_t*)));
 }


 void Protocol::SubThreadRun()
 {
     while(1){
         if(!RecvQueue.isEmpty()){
            ProtocolAnalyse();
         }
         QThread::msleep(10);
     }

 }

 int32_t Protocol::ProtocolAnalyse()
 {
     int len = RecvQueue.size();
     bool get_frame_head = false;
     uint8_t data;
     uint8_t cmd_len;
     frame_arr->clear();
     A0_CMD_t* frame_A0 = (A0_CMD_t*)malloc(sizeof(A0_CMD_t));
     if(frame_A0 == NULL){
         return -1;
     }

     int i = 0;
     for (i = 0; i < len; i++) {
         if(RecvQueue.at(i) != 0xA0){
             data = RecvQueue.dequeue();
             qDebug() << "RecvQueue.dequeue:" + QString::number(data, 16).toUpper();
         }
         else{
             get_frame_head = true;
             break;
         }
         // qDebug() << QString::number(data, 16).toUpper();
     }

     if(get_frame_head == true){
         if((i + 1) >= len){
             return 0;
         }
         cmd_len = RecvQueue.at(i + 1);
         if((i + cmd_len + 2) > len){
             return 0;
         }

         for(int j = 0; j < cmd_len + 2; j++){
             data = RecvQueue.dequeue();
             frame_arr->append(data);
             // qDebug() << QString::number(data, 16).toUpper();
         }

         if(this->check.Crc16_Rtu_Verification((unsigned char*)frame_arr->data(), cmd_len + 2, 0) == 0){
             free(frame_A0);
             return -1;
         }

         frame_A0->head        = frame_arr->at(0);
         frame_A0->len         = frame_arr->at(1);
         frame_A0->originAddr  = frame_arr->at(2);
         frame_A0->targetAddr  = frame_arr->at(3);
         frame_A0->cmd_RW_Type = frame_arr->at(4);
         frame_A0->mainCmdID   = frame_arr->at(5);
         frame_A0->subCmdID    = frame_arr->at(6);
         frame_A0->data        = frame_arr->data() + 7;

         // QDateTime current_date_time =QDateTime::currentDateTime();
         // QString current_date =current_date_time.toString("hh:mm:ss.zzz");
         if(frame_A0->mainCmdID == 0x01  && frame_A0->cmd_RW_Type == 0x54){
             switch(frame_A0->subCmdID){
             case 0x01:
                 emit HandShakeAck(frame_A0);
                 break;
             case 0x02:
                 emit FirmwareVersion(frame_A0);
                 break;
             case 0x03:
                 emit DeviceInfoRead(frame_A0);
                 break;
             case 0x05:
                 emit BoardStatusRead(frame_A0);
                 break;
             default:
                 free(frame_A0);
                 break;
             }
         }
         else if(frame_A0->mainCmdID == 0x02  && frame_A0->cmd_RW_Type == 0x54){
             switch(frame_A0->subCmdID){
             case 0x02:
                 emit CoilCurrentRead(frame_A0);
                 break;
             case 0x03:
                 emit CoilVolRead(frame_A0);
                 break;
             case 0x04:
                 emit CoilResistRead(frame_A0);
                 break;
             case 0x05:
                 emit PowerVolRead(frame_A0);
                 break;
             case 0x06:
                 emit InputVolRead(frame_A0);
                 break;
             case 0x07:
                 emit InputCurrentRead(frame_A0);
                 break;
             case 0x08:
                 emit OutputCurrentRead(frame_A0);
                 break;
             case 0x09:
                 emit BoardTempRead(frame_A0);
                 break;
             case 0x0A:
                 emit BoardID_Read(frame_A0);
                 break;
             default:
                 free(frame_A0);
                 break;
             }
         }
         else if(frame_A0->mainCmdID == 0x03 && frame_A0->cmd_RW_Type == 0x54){
             switch(frame_A0->subCmdID){
             case 0x04:
                 emit CoilCurrentCoefRead(frame_A0);
                 break;
             case 0x05:
                 emit CoilVolCoefRead(frame_A0);
                 break;
             default:
                 free(frame_A0);
                 break;
             }
         }
         else if(frame_A0->mainCmdID == 0xCC && frame_A0->cmd_RW_Type == 0x54){
             switch(frame_A0->subCmdID){
             case 0x03:
                 if(frame_A0->len == 0x47){
                     frame_A0->dataLen = 16;
                 }
                 else if(frame_A0->len == 0x0B){
                     frame_A0->dataLen = 1;
                 }
                 else{
                     break;
                 }

                 // qDebug()<< current_date + ": arrived emit adsAds8326Read";
                 emit Ads8326Read(frame_A0);
                 // emit Ads8326ReadNullParam();
                 break;
             case 0x04:
                 emit DialSwRead(frame_A0);
                 break;
             default:
                 free(frame_A0);
                 break;
             }
         }
         else{
             free(frame_A0);
         }

     }
     return 0;
 }
//void Protocol::CreateCmdModTable(){
//    for(int i = 0; i < this->cmd_mod.count(); i++){
//        protocolTabWidget->addTab(this->cmd_mod.at(i),"tttt");

//    }
//}
