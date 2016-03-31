#include <stdio.h>
#include <string.h>

#include "file_handler.h"

#define ENCODE_READ_LENGTH 4
#define DECODE_READ_LENGTH 5

size_t get_encode_chars(FILE* fp, char* str) {
	fgets(str, ENCODE_READ_LENGTH, fp);
	return strlen(str);
}

size_t get_decode_chars(FILE* fp, char* str) {
	fgets(str, DECODE_READ_LENGTH, fp);
	return strlen(str);
}

void write_code(FILE* fp, char* str) {
	fputs(str, fp);
}

void write_decode(FILE* fp, size_t write_size, char* str) {
	for (int i = 0; i < write_size; i++)
		fputc(str[i], fp);
}

size_t fsize(FILE* fp) {
  size_t size;
  size_t pos = ftell(fp);
  fseek(fp, 0, SEEK_END);
  size = ftell(fp);
  fseek(fp, pos, SEEK_SET);
  return size;
}
