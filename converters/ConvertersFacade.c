void codificateASCIItoBase64(char* input_file,char* output_file){
    
  // Variables
  FILE* readableFile; 
  FILE* writableFile;
  char charArray[4];      // La posicion 0 es para la longitud.
  char processedArray[4]; // 4 caracteres codificados en base 64.
  // Fin Variables
  
  readableFile = fopen("../textFiles/%s",input_file , "r");
  writableFile = fopen("../textFiles/%s",output_file , "w");
  
  while( !feof(readableFile) ){
      
      getArrayOfCaracters(readableFile, charArray );
      processArrayForCodification( charArray, processedArray );
      writeArray(processedArray);
      
  }
   
  fclose(readableFile);
  fclose(writableFile);
    
}

void codificateBase64toASCII(char* input_file,char* output_file){
    
      // Variables
  FILE* readableFile; 
  FILE* writableFile;
  char charArray[4];      // 4 caracteres codificados en base 64.
  char processedArray[3]; // 3 caracteres codificados en ASCII.
  // Fin Variables
  
  readableFile = fopen("../textFiles/%s",input_file , "r");
  writableFile = fopen("../textFiles/%s",output_file , "w");
  
  while( !feof(readableFile) ){
      
      getArrayOfCaracters(readableFile, charArray );
      processArrayForDecodification( charArray, processedArray );
      writeArray(processedArray);
      
  }
   
  fclose(readableFile);
  fclose(writableFile);
    
}

void processArrayForCodification( char* charArray, char* processedArray ){
    
}

void processArrayForDecodification( char* charArray, char* processedArray ){
    
}