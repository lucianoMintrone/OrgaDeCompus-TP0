#ifndef ASCII_64_CONVERTER_H
#define ASCII_64_CONVERTER_H

#include <stdlib.h>

void _encode_ascii_to_64(char *ascii_arr, size_t read_size, char *result);

size_t _decode_64_to_ascii(char *base24CharArray, char *processedArray);

#endif // ASCII_64_CONVERTER_H
