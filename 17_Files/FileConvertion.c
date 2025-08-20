#include<stdio.h>
int main(int argc, char * argv[]){
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE * fp = fopen(argv[1], "r+");
    
    if(fp == NULL){
        printf("Error: File not found or cannot be opened.\n");
        return 1; 
    }

    int ch; 
    while((ch = fgetc(fp)) != EOF){
        if(((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z'))){
        char modified_ch = ch ^ (1 << 5);
        fseek(fp, -1, SEEK_CUR);
        fputc(modified_ch, fp);
        fseek(fp, 0, SEEK_CUR);
        }
    }

    fclose(fp);
    printf("File modification complete.\n");

    return 0;
}
