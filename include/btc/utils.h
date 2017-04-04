/*

 The MIT License (MIT)

 Copyright (c) 2015 Douglas J. Bakkum
 Copyright (c) 2015 Jonas Schnelli

 Permission is hereby granted, free of charge, to any person obtaining
 a copy of this software and associated documentation files (the "Software"),
 to deal in the Software without restriction, including without limitation
 the rights to use, copy, modify, merge, publish, distribute, sublicense,
 and/or sell copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included
 in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
 OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.

*/


#ifndef __LIBBTC_UTILS_H__
#define __LIBBTC_UTILS_H__

#include <stdint.h>
#include <stddef.h>

#include "btc.h"

#ifdef __cplusplus
extern "C" {
#endif

#define TO_UINT8_HEX_BUF_LEN 2048
#define VARINT_LEN 20

#define strlens(s) (s == NULL ? 0 : strlen(s))

LIBBTC_API void utils_clear_buffers(void);
LIBBTC_API void utils_hex_to_bin(const char* str, unsigned char* out, int inLen, int* outLen);
LIBBTC_API void utils_bin_to_hex(unsigned char* bin_in, size_t inlen, char* hex_out);
LIBBTC_API uint8_t* utils_hex_to_uint8(const char* str);
LIBBTC_API char* utils_uint8_to_hex(const uint8_t* bin, size_t l);
LIBBTC_API void utils_reverse_hex(char* h, int len);
LIBBTC_API void utils_uint256_sethex(char *psz, uint8_t *out);
LIBBTC_API void * safe_malloc(size_t size);
LIBBTC_API void btc_cheap_random_bytes(uint8_t* buf, uint32_t len);
#ifdef __cplusplus
}
#endif

#endif /* __LIBBTC_UTILS_H__*/