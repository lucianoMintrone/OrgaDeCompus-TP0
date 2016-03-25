/*
 ============================================================================
 Name        : TP0.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "AsciiToBase64Convertor.h"
#include "Base24ToAsciiConvertor.h"

void typeTextToConvertToBase24();
void typeTextToConvertToAscii();

int main(void) {
	typeTextToConvertToBase24();
	printf("\n=========\n");
	typeTextToConvertToAscii();
	return EXIT_SUCCESS;
}

