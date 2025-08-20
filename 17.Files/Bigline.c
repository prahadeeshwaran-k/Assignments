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
    
    while((ch = fgetc(fp))!= EOF){
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
    
    printf("Total Characters        : %d\n",chcount);
    printf("Total No of Lines       : %d\n",lines);
    printf("Bigline Index number    : %d\n",bigline);
    printf("Bigline Total Characters: %d\n",biglinelen);
}

