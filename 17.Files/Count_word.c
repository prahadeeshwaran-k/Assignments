#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char buffer[4064];
    int count=0;
    FILE*fp = fopen("text.txt","r");
    if(fp == NULL){
        printf("NO FILE");
        return 0;
        }
    while(fgets(buffer,4064,fp) !=NULL){
        int padding = 0;
        char*pos;
        
        while((pos = strstr(buffer+padding,"Never")) != NULL){
            //printf(" pos %s\n",pos);
            count++;
            padding = pos -buffer;
            padding += sizeof("Never");
        }
    }
    printf("%d\n",count);
}