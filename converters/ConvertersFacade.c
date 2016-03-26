void codificateASCIItoBase64(){
    
  // Variables
  FILE* readableFile; 
  FILE* writableFile;
  char charArray[4];      // La posicion 0 es para la longitud.
  char processedArray[4]; // 4 caracteres codificados en base 64.
  // Fin Variables
  
  openReadableFile(readableFile);
  openWritableFile(writableFile);
  
  while( !feof(fp) ){
      
      getArrayOfCaracters(fp, charArray );
      processArrayForCodification( charArray, processedArray );
      writeArray(processedArray);
      
  }
   
  fclose(readableFile);
  fclose(writableFile);
    
}

void codificateBase64toASCII(){
    
      // Variables
  FILE* readableFile; 
  FILE* writableFile;
  char charArray[4];      // 4 caracteres codificados en base 64.
  char processedArray[3]; // 3 caracteres codificados en ASCII.
  // Fin Variables
  
  openReadableFile(readableFile);
  openWritableFile(writableFile);
  
  while( !feof(fp) ){
      
      getArrayOfCaracters(fp, charArray );
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