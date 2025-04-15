#pragma once

#include <AP_HAL/AP_HAL_Boards.h>
#include <AP_Frsky_Telem/AP_Frsky_config.h>
#include <AP_OSD/AP_OSD_config.h>
#include <AP_RCProtocol/AP_RCProtocol_config.h>
#include <AP_Scripting/AP_Scripting_config.h>

#ifndef HAL_CRSF_TELEM_ENABLED
#define HAL_CRSF_TELEM_ENABLED AP_RCPROTOCOL_CRSF_ENABLED && AP_FRSKY_SPORT_PASSTHROUGH_ENABLED
#endif

#ifndef HAL_CRSF_TELEM_TEXT_SELECTION_ENABLED
#define HAL_CRSF_TELEM_TEXT_SELECTION_ENABLED OSD_ENABLED && OSD_PARAM_ENABLED && HAL_CRSF_TELEM_ENABLED && HAL_PROGRAM_SIZE_LIMIT_KB > 1024
#endif

#ifndef HAL_SPEKTRUM_TELEM_ENABLED
#define HAL_SPEKTRUM_TELEM_ENABLED 1
#endif

#ifndef AP_GHST_TELEM_ENABLED
#define AP_GHST_TELEM_ENABLED AP_RCPROTOCOL_GHST_ENABLED
#endif

#ifndef AP_CRSF_SCRIPTING_ENABLED
#define AP_CRSF_SCRIPTING_ENABLED HAL_CRSF_TELEM_TEXT_SELECTION_ENABLED && AP_SCRIPTING_ENABLED
#endif

