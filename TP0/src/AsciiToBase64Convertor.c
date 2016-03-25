/*
 * AsciiToBase64Convertor.c

 *
 *  Created on: Mar 24, 2016
 *      Author: luciano
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char * symbolInBase24ForInt(int number);
int numberToBeConvert(char charRead, int numberOfShiftsToTheRigth , int lastPartOfPreviousReadByte);
int numberToBeConvertForLastByte (int lastPartOfPreviousReadByte ,int numberOfShiftsToTheLeft);

void typeTextToConvertToBase24(){
	int lastPartOfCurrentReadingByte;
	int lastPartOfPreviousReadByte = 0;
	int byteToConvert;

	char charRead;
	int charReadCounter = 0;

	int i;
	for (i = 0 ; i < 0 ; i ++) {
		printf("Enter a char: ");
		scanf("%s",&charRead);

		switch(charReadCounter % 3) {
		case 0:{
			lastPartOfCurrentReadingByte = charRead&3;
			byteToConvert = numberToBeConvert(charRead, 2, lastPartOfPreviousReadByte);

			printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
		}
		break;
		case 1:{
			lastPartOfCurrentReadingByte = charRead&15;
			byteToConvert = numberToBeConvert(charRead, 4, lastPartOfPreviousReadByte);

			printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
		}
		break;
		case 2:{
			lastPartOfCurrentReadingByte = charRead&63;
			byteToConvert = numberToBeConvert(charRead, 6, lastPartOfPreviousReadByte);

			printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
			byteToConvert = lastPartOfCurrentReadingByte;
			printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
			lastPartOfCurrentReadingByte = 0;
		}
		break;
		}

		lastPartOfPreviousReadByte = lastPartOfCurrentReadingByte;

		charReadCounter ++;
	}

	if (charReadCounter % 3 == 1) {
		byteToConvert = numberToBeConvertForLastByte(lastPartOfPreviousReadByte, 4);

		printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
		printf("Your symbol in base 64 is =\n");
		printf("Your symbol in base 64 is =\n");
	}

	if (charReadCounter % 3 == 2) {
		byteToConvert = numberToBeConvertForLastByte(lastPartOfPreviousReadByte, 2);

		printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
		printf("Your symbol in base 64 is =\n");
	}
}

int numberToBeConvert(char charRead, int numberOfShiftsToTheRigth , int lastPartOfPreviousReadByte) {
	int firstPartOfCurrentReadingByte = charRead>>numberOfShiftsToTheRigth;
	int numberOfShiftsToTheLeft = 8 - numberOfShiftsToTheRigth;
	lastPartOfPreviousReadByte = lastPartOfPreviousReadByte<<numberOfShiftsToTheLeft;

	return firstPartOfCurrentReadingByte + lastPartOfPreviousReadByte;
}

int numberToBeConvertForLastByte (int lastPartOfPreviousReadByte ,int numberOfShiftsToTheLeft) {
	return lastPartOfPreviousReadByte = lastPartOfPreviousReadByte<<numberOfShiftsToTheLeft;
}

