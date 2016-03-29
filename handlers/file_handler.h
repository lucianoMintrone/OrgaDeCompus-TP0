#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <stdio.h>

void getArrayOfCaracters (FILE* fp, char* charArray);

void verifyArrayData(char* charArray);

void writeArray(FILE* fp,char* array);

void writeArrayD(FILE* fp,char* array);

void getArrayOfCaractersD(FILE* fp, char* charArray);

#endif //FILE_HANDLER_H

