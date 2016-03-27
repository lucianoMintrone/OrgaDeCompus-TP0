#include <stdio.h>
#include <stdlib.h>

void writeArray( FILE* fp,char* array ){
    
    char string[4];
    
    for (int i = 0; i < 4; i++){
        
        string [i] = array [i];
        
    }
    
    fprintf(fp, "%s", string);
    
}