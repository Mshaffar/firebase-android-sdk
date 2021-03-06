// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef __CRASHLYTICS_HANDLER_DETAIL_CONTEXT_H__
#define __CRASHLYTICS_HANDLER_DETAIL_CONTEXT_H__

#include <android/asset_manager.h>
#include <android/configuration.h>
#include <android/sensor.h>

namespace google { namespace crashlytics { namespace handler { namespace detail {

struct context {
    pid_t              pid;
    const char*        filename;
    AAssetManager*     asset_manager;
    ASensorManager*    sensor_manager;
    AConfiguration*    configuration;
};

}}}}

#endif // __CRASHLYTICS_HANDLER_DETAIL_CONTEXT_H__
