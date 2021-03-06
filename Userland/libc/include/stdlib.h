#ifndef __STD_LIB__
#define __STD_LIB__

#include <stdint.h>

extern uint8_t bss;
extern uint8_t endOfBinary;

void * memset(void * destination, int32_t character, uint64_t length);
void * memcpy(void * destination, const void * source, uint64_t length);

#endif