#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "file_handler.h"

// En charArray aloca 3 caracteres de un .txt, posiciones 1 2 3.
// La posicion 0 esta reservada para la longitud logica.
void getArrayOfCaracters (FILE* fp, char* charArray) {
    int i = 0;
       
    while(!feof(fp) && i != 3){     
        charArray[i + 1] = fgetc(fp);        
        i++;
    }
    verifyArrayData(&charArray);
}


// Remueve el -1 que indica EOF.
// Y en la posicion cero setea la longitud logica, cantidad de valores validos.
void verifyArrayData(char* charArray) {
    int i = 1;
    bool loop = true;
    charArray[0] = 3;
    
    while ((i <= 3) && loop) {
        
        if (charArray[i] == -1) {
            loop = false;
            charArray[0] = i - 1;
        }
        i++;
    }
}

void writeArray(FILE* fp,char* array) {
    char string[4];
    
    for (int i = 0; i < 4; i++)
		string [i] = array [i];
    
    fprintf(fp, "%s", string); 
}
