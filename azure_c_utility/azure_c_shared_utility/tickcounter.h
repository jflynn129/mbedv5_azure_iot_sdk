// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef TICKCOUNTER_H
#define TICKCOUNTER_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <stdint.h>

#include "azure_c_shared_utility/umock_c_prod.h"

#if _WIN32
    typedef uint_fast64_t tickcounter_ms_t; // Use 64-bit because of QueryPerformanceCounter call
#else
    typedef uint_fast32_t tickcounter_ms_t;
#endif

typedef void* TICK_COUNTER_HANDLE;

    MOCKABLE_FUNCTION(, TICK_COUNTER_HANDLE, tickcounter_create);
    MOCKABLE_FUNCTION(, void, tickcounter_destroy, TICK_COUNTER_HANDLE, tick_counter);
    MOCKABLE_FUNCTION(, int, tickcounter_get_current_ms, TICK_COUNTER_HANDLE, tick_counter, tickcounter_ms_t*, current_ms);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* TICKCOUNTER_H */
