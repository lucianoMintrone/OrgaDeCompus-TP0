/*
 * Base24ToAsciiConvertor.c
 *
 *  Created on: Mar 24, 2016
 *      Author: luciano
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Base24ToAsciiTable.h"

int numberForSymbolInBase24 (char symbol);

void typeTextToConvertToAscii() {
	char charRead;
	char otherCharRead;

	int numberFromSymbol;
	int secondNumberFromSymbol;
	int charReadCounter = 0;

	int i;
	for (i = 0 ; i < 6 ; i ++) {
		printf("Enter a base24 char: ");
		scanf("%s",&charRead);

		if (charRead == '='){
			if (numberFromSymbol != 0)
				printf("Char en Ascii: %c\n", numberFromSymbol);
			break;
		}

		switch(charReadCounter % 3){
			case 0:{
				int firstNumberFromSymbol = numberForSymbolInBase24(charRead);
				firstNumberFromSymbol = firstNumberFromSymbol<<2;
				printf("Enter a base24 char: ");
				scanf("%s",&otherCharRead);
				secondNumberFromSymbol = numberForSymbolInBase24(otherCharRead);
				int firstPartOfSymbol = secondNumberFromSymbol;
				firstPartOfSymbol = firstPartOfSymbol>>4;
				printf("Char en Ascii: %c\n", firstNumberFromSymbol + firstPartOfSymbol);
				numberFromSymbol = secondNumberFromSymbol&15;
				numberFromSymbol = numberFromSymbol<<4;
			}
			break;
			case 1:{
				secondNumberFromSymbol = numberForSymbolInBase24(charRead);
				int firstPartOfSymbol = secondNumberFromSymbol;
				firstPartOfSymbol = firstPartOfSymbol>>2;
				printf("Char en Ascii: %c\n", numberFromSymbol + firstPartOfSymbol);
				numberFromSymbol = secondNumberFromSymbol&3;
				numberFromSymbol = numberFromSymbol<<6;
			}
			break;
			case 2:{
				secondNumberFromSymbol = numberForSymbolInBase24(charRead);
				printf("Char en Ascii: %c\n", numberFromSymbol + secondNumberFromSymbol);
				numberFromSymbol = 0;
			}
			break;
		}

		charReadCounter ++;
	}
}

