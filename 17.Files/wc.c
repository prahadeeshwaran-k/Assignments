#include<stdio.h>
int main(int argc ,char*argv[]){
    if(argc<2){
        printf("Enter The File Name");
        return 0;
    }

    int charcount = 0, line =0 ,word =0;
    char buffer[4096];
    FILE *fp = fopen(argv[1],"r");
    if(fp == NULL){
        printf("No File in this name %s",argv[1]);
        return 0;
    }

    fseek(fp,0,SEEK_END);
    charcount = ftell(fp);
    rewind(fp);

    while(fgets(buffer,4096,fp) != NULL){
        line++;
    }
    rewind(fp);

    while(fscanf(fp,"%s",buffer)!=EOF){
        word++;
    }

    printf("%d %d %d %s\n",line,word,charcount,argv[1]);
}
