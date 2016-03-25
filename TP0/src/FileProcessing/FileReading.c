
// En charArray aloca 3 caracteres de un .txt, posiciones 1 2 3.
// La posicion 0 esta reservada para la longitud logica.

char getArrayOfCaracters (FILE* fp, char* charArray){
    // Variables
    int i = 0;
    // Fin Variables
    
    while(!feof(fp) && i != 3){
        
        charArray[i + 1] = fgetc(fp);        
        i++;
        
    }
    
    verifyArrayData( &charArray );
    
}


// Remueve el -1 que indica EOF.
// Y en la posicion cero setea la longitud logica, cantidad de valores validos.

void verifyArrayData( char* charArray ){
    
    // Variables
    int i = 1;
    int boolContinue = 1; // 0 = False ; 1 = True
    // Fin Variables
    
    charArray[0] = 3;
    
    while ( (i <= 3) && boolContinue ) {
        
        if (charArray[i] == -1){
            
            boolContinue = 0;
            charArray[0] = i - 1;
            
        }
        
        i++;
        
    }
    
}
