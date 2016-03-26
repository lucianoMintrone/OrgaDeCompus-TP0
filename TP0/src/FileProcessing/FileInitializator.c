void openReadableFile(FILE* fp){
    // Variables
    char fileName[40];
    char charRead;
    int i = 0;

	
    printf("Write a file name, plus it's extension:");
    scanf("%s", fileName);
    fp = fopen("../textFiles/%s",fileName , "r");
    
}

void openWritableFile(FILE* fp){
    
    fp = fopen("../textFiles/output.txt" , "w");
    
}