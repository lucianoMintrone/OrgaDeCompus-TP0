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
  bool help, version, output, input, decode;
  help = version = output = input = decode = false;
  char *input_file, *output_file;
  input_file = output_file = NULL;
  int flag = 0;

  while ((flag = getopt(argc, argv,"Vho:i:d")) != -1) {
    switch (flag) {
      case 'V' :
        version = true;
        break;
      case 'h' :
        help = true;
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
    }
  }

  if (help) {
    show_help();
  } else if (version) {
    show_version();
  } else if (input && output && decode) {
    //64_2_ascii(input_file, output_file);
  } else if (input && output) {
    //ascii_2_64(input_file, output_file);
  } else if (argv[1]) {
    /* ascii_2_64(argv[1], NULL);
     * Cuando output_file == NULL que mande el resultado por stdout ¿?
     * y lo que recibe en el input es el texto a convertir directo
     */
  }

  return EXIT_SUCCESS;
}
