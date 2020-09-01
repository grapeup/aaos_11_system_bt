/******************************************************************************
 *
 *  Copyright 2014 The Android Open Source Project

 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at:
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/

/******************************************************************************
 *
 *  This is the main implementation file for the BTA MCE I/F
 *
 ******************************************************************************/

#include <stdlib.h>

#include "bta_api.h"
#include "bta_sdp_api.h"
#include "bta_sdp_int.h"
#include "bta_sys.h"

/*****************************************************************************
 * Constants and types
 ****************************************************************************/

tBTA_SDP_CB bta_sdp_cb;
