#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <getopt.h>

#include "converters/ascii_64_converter.h"
#include "handlers/file_handler.h"

#define HELP_LENGTH 297
#define VERSION 1.0

void show_version() {
    printf("v%f\n", VERSION);
}

size_t fsize(FILE* fp) {
  size_t size;
  size_t pos = ftell(fp);
  fseek(fp, 0, SEEK_END);
  size = ftell(fp);
  fseek(fp, pos, SEEK_SET);//rewind(fp);
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

void encode_64_to_ascii(char* input_file, char* output_file) {
  FILE* input; 
  FILE* output;
  char arr[4]; // La posicion 0 es para la longitud.
  char processed[4]; // 4 caracteres codificados en base 64.
  
  input = fopen(input_file, "r");
  output = fopen(output_file, "w");
  
  for (int i = 0; i < fsize(input); i+= 3) {
      getArrayOfCaracters(input, arr);
      _encode_ascii_to_64(arr, processed);
      writeArray(output, processed);
  }
   
  fclose(input);
  fclose(output);
}

void decode_64_to_ascii(char* input_file, char* output_file) {
  FILE* input; 
  FILE* output;
  char arr[4];      // 4 caracteres codificados en base 64.
  char processed[4]; // 3 caracteres codificados en ASCII.

  input = fopen(input_file , "r");
  output = fopen(output_file , "w");
  
  for (int i = 0; i < fsize(input); i+= 4) {
      getArrayOfCaractersD(input, arr);
      _decode_64_to_ascii(arr, processed);
      writeArrayD(output, processed);
      
  }
   
  fclose(input);
  fclose(output);
}

int main (int argc, char *argv[]) {
  bool help, version, output, input, decode;
  help = version = output = input = decode = false;
  char *input_file, *output_file;
  input_file = output_file = NULL;
  int flag = 0;
  struct option opts[] = {
        {"version", no_argument, 0, 'V'},
        {"help", no_argument, 0, 'h'},
        {"output", required_argument, 0, 'o'},
        {"input", required_argument, 0, 'i'},
        {"decode", no_argument, 0, 'd'}
  };

  while ((flag = getopt_long(argc, argv, "Vho:i:d", opts, NULL)) != -1) {
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
    decode_64_to_ascii(input_file, output_file);
  } else if (input && output) {
    encode_64_to_ascii(input_file, output_file);
  } else if (!feof(stdin)) {
    /*
     * ascii_2_64(NULL, NULL);
     * Cuando input_file y output_file == NULL que mande el resultado por stdout ¿?
     */
  }
  return EXIT_SUCCESS;
}
