// ----------------------------------------------------------------------------
// BSD 3-Clause License

// Copyright (c) 2019-2020, Centro "E.Piaggio"
// All rights reserved.
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:

// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.

// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.

// * Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.

// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// POSSIBILITY OF SUCH DAMAGE.
// ----------------------------------------------------------------------------

/**
 *  \file       FIRMWARE_CONFIGURATION.h
 *
 *  \brief      Definitions for SoftHand and Other Devices commands, parameters and packages.
 *
 *  \date       March 20th, 2020
 *  \author     _Centro "E.Piaggio"_
 *  \copyright  (C) 2019-2020 Centro "E.Piaggio". All rights reserved.
 *  \details
 *  This file is included in the firmware, in its libraries and
 *  applications. It contains all definitions that are necessary to discriminate the right firmware.
 *
**/

#ifndef FIRMWARE_CONFIGURATION_H_INCLUDED
#define FIRMWARE_CONFIGURATION_H_INCLUDED

 
// Macro related to different firmware configurations
 
#define MASTER_FW
#define VERSION                 "VIBES_Socket(Toast): updated 27/11/24"
       
    #define NUM_OF_DEV_PARAMS           NUM_OF_PARAMS          // Number of parameters saved in the EEPROM for AIR_CHAMBERS_and_VIBROTACTILE_FB_FW FIRMWARE
                                                               // All parameters except: Wrist parameters (3)
    #define NUM_OF_DEV_PARAM_MENUS      NUM_OF_PARAMS_MENU     // Number of parameters menu

    #define NUM_DEV_IMU         N_IMU_MAX

#endif
/* [] END OF FILE */