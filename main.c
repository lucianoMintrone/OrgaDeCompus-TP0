#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <getopt.h>
//#include "ascii_64.h"

#define HELP_LENGTH 297
#define VERSION 1.0

void show_version() {
    printf("v%f\n", VERSION);
}

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
  bool output, input, decode;
  output = input = decode = false;
  char *input_file, *output_file;
  int flag = 0;

  while ((flag = getopt(argc, argv,"Vho:i:d")) != -1) {
    switch (flag) {
      case 'V' :
        show_version();
        break;
      case 'h' :
        show_help();
        break;
      case 'o' :
        output_file = optarg;
        output = true;
        break;
      case 'i' :
        input_file = optarg;
        input = true;
        break;
      case 'd' :
        decode = true;
        break;
      default:
        show_help();
        return EXIT_FAILURE;
    }
  }

  if (input && output && decode) {
    //64_2_ascii(input_file, output_file);
  } else if (input && output) {
    //ascii_2_64(input_file, output_file);
  }

  return EXIT_SUCCESS;
}
