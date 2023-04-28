/*
 * Aclass_default.h
 *
 *  Created on: 2022.03.04
 *      Author: taoye
 */
#ifndef ACLASS_DEFAULT_H_
#define ACLASS_DEFAULT_H_

#include "AclassProl_config.h"
#ifndef     A_PROTOCOL_NAME_MAX
    #define 	A_PROTOCOL_NAME_MAX			10
#endif

#ifndef     A_PROTOCOL_USE_RTOS
    #define 	A_PROTOCOL_USE_RTOS			0
#endif

#ifndef     A_PROTOCOL_MSG_QUEUE_SIZE
    #define 	A_PROTOCOL_MSG_QUEUE_SIZE	5
#endif

#ifndef     A_PROTOCOL_RECIVE_MAX
    #define 	A_PROTOCOL_RECIVE_MAX	    128
#endif

#ifndef     A_PROTOCOL_SEND_MAX
    #define 	A_PROTOCOL_SEND_MAX	        128
#endif

#ifndef     A_PROTOCOL_ACKDATA_MAX
    #define 	A_PROTOCOL_ACKDATA_MAX	    64
#endif

#ifndef     A_PROTOCOL_USE_CHECK_FRAME_END
    #define 	A_PROTOCOL_USE_CHECK_FRAME_END	    1
#endif

#ifndef     A_PROTOCOL_USE_IAP
    #define 	A_PROTOCOL_USE_IAP	                0
#endif

#ifndef     A_PROTOCOL_USE_DEBUG_LOG
    #define 	A_PROTOCOL_USE_DEBUG_LOG	        0
#endif

#ifndef     A_PROTOCOL_MAST_NODE_NAME
    #define 	A_PROTOCOL_MAST_NODE_NAME	        "PC"
#endif

#ifndef     A_PROTOCOL_USE_TABLE
    #define 	A_PROTOCOL_USE_TABLE	            0
#endif

#if      A_PROTOCOL_USE_RTOS == 0

    
#elif   A_PROTOCOL_USE_RTOS == 1
    #ifndef     A_PROTOCOL_TASK_SIZE
        #define   	A_PROTOCOL_TASK_SIZE		    256
    #endif
    #ifndef     A_PROTOCOL_TASK_PRIORITY
        #define   	A_PROTOCOL_TASK_PRIORITY	    3
    #endif
	#ifndef		A_PROTOCOL_IRQ_STA
		#error Aclass_protocol use RTOS but not define "A_PROTOCOL_IRQ_STA",please define in AclassProl_config.h!!!
	#endif
#endif

#if     A_PROTOCOL_USE_SYSTEM_RESET != 0
    #ifndef A_PROTOCOL_RESET_DELAYTIME
        #define     A_PROTOCOL_RESET_DELAYTIME      500
    #endif
    #ifndef A_PROTOCOL_DELAYMS_FUN
        #error Aclass_protocol use system reset but not define "A_PROTOCOL_DELAYMS_FUN",please define in AclassProl_config.h!!!
    #endif   
    #ifndef A_PROTOCOL_SYSTEM_RESET_FUN
        #error Aclass_protocol use system reset but not define "A_PROTOCOL_SYSTEM_RESET_FUN",please define in AclassProl_config.h!!!
    #endif   
#endif

#if      A_PROTOCOL_USE_IAP != 0

    #if     A_PROTOCOL_USE_SYSTEM_RESET == 0
        #error Aclass_protocol use iap but not open "A_PROTOCOL_USE_SYSTEM_RESET",please define in AclassProl_config.h!!!
    #endif

    #ifndef     A_PROTOCOL_FLASH_START_ADDR
         #error Aclass_protocol use iap but not define "STORAGE_DOWNLOAD_BASE",please define in AclassProl_config.h!!!
    #endif

    #ifndef     A_PROTOCOL_FLASH_AREA_SIZE
         #error Aclass_protocol use iap but not define "STORAGE_DOWNLOAD_SIZE",please define in AclassProl_config.h!!!
    #endif

    #ifndef     A_PROTOCOL_FLASH_READ_FUN
        #error Aclass_protocol use iap but not define "IAP_FLASH_ERASE_FUN",please define in AclassProl_config.h!!!
    #endif

    #ifndef     A_PROTOCOL_FLASH_WRITE_FUN
        #error Aclass_protocol use iap but not define "IAP_FLASH_WRITE_FUN",please define in AclassProl_config.h!!!
    #endif

    #ifndef     A_PROTOCOL_FLASH_ERASE_FUN
        #error Aclass_protocol use iap but not define "IAP_FLASH_READ_FUN",please define in AclassProl_config.h!!!
    #endif
    
#endif

#if     A_PROTOCOL_USE_DEBUG_LOG == 1
    #ifndef A_PROTOCOL_USE_SHELL
    #define A_PROTOCOL_USE_SHELL                    0
    #endif
    #ifndef ACLASS_LOG_I
        #error Aclass_protocol use log but not define "ACLASS_LOG_I",please define in AclassProl_config.h!!!
    #endif   
    #ifndef ACLASS_LOG_W
        #error Aclass_protocol use log but not define "ACLASS_LOG_W",please define in AclassProl_config.h!!!
    #endif   
    #ifndef ACLASS_LOG_E
        #error Aclass_protocol use log but not define "ACLASS_LOG_E",please define in AclassProl_config.h!!!
    #endif   
    #ifndef ACLASS_LOG_D
        #error Aclass_protocol use log but not define "ACLASS_LOG_D",please define in AclassProl_config.h!!!
    #endif   
    #ifndef ACLASS_LOG_HEX
        #error Aclass_protocol use log but not define "ACLASS_LOG_HEX",please define in AclassProl_config.h!!!
    #endif   
#endif

#endif /* SRC_COMM_ACLASS_ANALAYZE_ACLASS_DEFAULT_H_ */

/******************* (C) COPYRIGHT 2022 CIQTEK taoye *****END OF FILE****/
