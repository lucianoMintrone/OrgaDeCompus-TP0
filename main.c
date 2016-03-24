#include <stdbool.h>
#include <stdio.h>
//#include "ascii264.h"

#define HELP_LENGTH 297

size_t fsize(FILE* fp) {
  size_t size;
  fseek(fp, 0, SEEK_END);
  size = ftell (fp);
  rewind(fp);
  return size;
}

void show_help() {
  FILE *fp = fopen("help.txt", "r");
  if (!fp) return;

  size_t size = fsize(fp);
  char buffer[HELP_LENGTH + 1];

  fread(buffer, sizeof(char), size, fp);
  buffer[HELP_LENGTH] = '\0';

  puts(buffer);
  fclose(fp);
}

int main (int argc, char *argv[]) {
  //bool version, help, output, input, decode;




  return 0;
}
