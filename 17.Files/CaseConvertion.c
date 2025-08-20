//Write a Program to Convert Lower to Upper and Upper to Lower Cases of a given file.
#include<stdio.h>
int main(int argc, char * argv[]){
    if (argc < 2) {
        printf("File </%s> Not there\n", argv[0]);
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
        }
        else{
            fputc(ch,fp);
        }
    }

    fclose(fp);
    printf("File modification complete.\n");

    return 0;
}
