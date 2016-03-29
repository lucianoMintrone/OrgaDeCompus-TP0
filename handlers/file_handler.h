#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <stdio.h>

size_t get_encode_chars(FILE* fp, char* str);

size_t get_decode_chars(FILE* fp, char* str);

void write_code(FILE* fp, char* str);

void write_decode(FILE* fp, size_t write_size, char* str);

size_t fsize(FILE* fp);

#endif //FILE_HANDLER_H
