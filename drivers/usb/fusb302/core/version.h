#ifdef FSC_DEBUG

#ifndef __FSC_VERSION_H__
#define __FSC_VERSION_H__

#include "platform.h"

#define FSC_TYPEC_CORE_FW_REV_UPPER  3
#define FSC_TYPEC_CORE_FW_REV_MIDDLE  3
#define FSC_TYPEC_CORE_FW_REV_LOWER  1

FSC_U8 core_get_rev_lower(void);
FSC_U8 core_get_rev_middle(void);
FSC_U8 core_get_rev_upper(void);

#endif 

#endif 
