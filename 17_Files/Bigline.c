#include <stdio.h>
int chcount,lines,bigline,biglinelen;
int main(){
    char ch;
    int temp;
    FILE*fp = fopen("text.txt","r");
    if(fp == NULL){
        printf("file is exist");
        return 0;
    }
    
    while((ch = fgetc(fs))!= EOF){
        temp++;
        chcount++;
        if(ch == '\n'){
            lines++;
            if(temp >biglinelen){
                biglinelen =temp;
                bigline = lines;
            }
            temp= 0;
        }
    }
    
    printf("Total Characters        : %d",chcount);
    printf("Total No of Lines       : %d",lines);
    printf("Bigline Index number    : %d",Bigline);
    printf("Bigline Total Characters: %d",biglinelen);
    
    
}

