#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "file_handler.h"

// En charArray aloca 3 caracteres de un .txt, posiciones 1 2 3.
// La posicion 0 esta reservada para la longitud logica.
void getArrayOfCaracters(FILE* fp, char* charArray) {
	
    for (int i = 1; i < 4; i++) {     
		
        charArray[i] = fgetc(fp);
        
	}
	
		
    verifyArrayData(charArray);
    
}

void getArrayOfCaractersD(FILE* fp, char* charArray) {
	
    for (int i = 1; i < 5; i++) {     
		
        charArray[i] = fgetc(fp);
        
	}
	
		
    verifyArrayData(charArray);
    
}


// Remueve el -1 que indica EOF.
// Y en la posicion cero setea la longitud logica, cantidad de valores validos.
void verifyArrayData(char* charArray) {
    bool loop = true;
    charArray[0] = 3;
    
    for (int i = 1; i < 4 && loop; i++) {
        if (charArray[i] == -1) {
            loop = false;
            charArray[0] = i - 1;
        }
    }
}

void writeArray(FILE* fp, char* array) {

    char string[4];
    
    for (int i = 0; i < 4; i++)
		string[i] = array[i];

    fprintf(fp, "%s", string);
}

void writeArrayD(FILE* fp, char* array) {

	printf("%d", array[0]);
    char string[array[0]];
    
    for (int i = 1; i < array[0]; i++)
		string[i] = array[i];
	
	printf("%s\n", string);
    fprintf(fp, "%s", string);
}
