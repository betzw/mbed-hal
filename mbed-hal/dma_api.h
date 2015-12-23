/* mbed Microcontroller Library
 * Copyright (c) 2014-2015 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_DMA_API_H
#define MBED_DMA_API_H

#include <stdint.h>

// TODO: deprecated. DMA support will be added to mbed-hal

// betzw: Using this deprecated mbed 2.0 interface as starting point for I2S/DMA implementation */

#define DMA_ERROR_OUT_OF_CHANNELS (NULL)
#define NUM_OF_DIRECTIONS         (2)

typedef enum {
    DMA_USAGE_NEVER,
    DMA_USAGE_OPPORTUNISTIC,
    DMA_USAGE_ALWAYS,
    DMA_USAGE_TEMPORARY_ALLOCATED,
    DMA_USAGE_ALLOCATED
} DMAUsage;

typedef void* channelid_t;

#ifdef __cplusplus
extern "C" {
#endif

void dma_init(void);

channelid_t dma_channel_allocate(uint32_t capabilities);

void dma_channel_free(channelid_t channelid);

#ifdef __cplusplus
}
#endif

#endif
