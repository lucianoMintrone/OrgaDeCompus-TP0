#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <getopt.h>

#include "converter/ascii_64_converter.h"
#include "handlers/file_handler.h"

#define HELP_LENGTH 297
#define VERSION 1.0
#define ENCODE_BLOCK_LENGTH 3
#define DECODE_BLOCK_LENGTH 4
#define READ_ENCODE_LENGTH 4
#define RESULT_ENCODE_LENGTH 5
#define READ_DECODE_LENGTH 5
#define RESULT_DECODE_LENGTH 4

void show_version() {
	printf("v%f\n", VERSION);
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

void encode_ascii_to_64(char* input_file, char* output_file) {
	char arr[READ_ENCODE_LENGTH], processed[RESULT_ENCODE_LENGTH];
	arr[READ_ENCODE_LENGTH - 1] = '\0';
	processed[RESULT_ENCODE_LENGTH - 1] = '\0';
  
	FILE* input;
	FILE* output;
	if (!input_file && !output_file) {
		input = stdin;
		output = stdout;
	} else {
		input = fopen(input_file, "r");
		output = fopen(output_file, "w");
	}
	if (!input || !output) return;
	
	size_t read_size;
  
	for (int i = 0; i < fsize(input); i += READ_ENCODE_LENGTH - 1) {
		read_size = get_encode_chars(input, arr);
		_encode_ascii_to_64(arr, read_size, processed);
		write_code(output, processed);
	}
	if (!input_file && !output_file) putc('\n', output);
	
	fclose(input);
	fclose(output);
}

void decode_64_to_ascii(char* input_file, char* output_file) {
	char arr[READ_DECODE_LENGTH], processed[RESULT_DECODE_LENGTH];
	arr[READ_DECODE_LENGTH - 1] = '\0';
	processed[RESULT_DECODE_LENGTH - 1] = '\0';
	FILE* input = fopen(input_file, "r");
	FILE* output = fopen(output_file, "w");
	if (!input || !output) return;
	size_t write_size;
 
	for (int i = 0; i < fsize(input); i += READ_DECODE_LENGTH - 1) {
		get_decode_chars(input, arr);
		write_size = _decode_64_to_ascii(arr, processed);
		write_decode(output, write_size, processed);
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
		encode_ascii_to_64(input_file, output_file);
	} else if (!feof(stdin)) {
		encode_ascii_to_64(NULL, NULL);
	}
	return EXIT_SUCCESS;
}
