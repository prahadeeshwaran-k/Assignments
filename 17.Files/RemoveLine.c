//Write a Program to remove a Specific line from the given text file
#include<stdio.h>
#include<stdlib.h>   
#define MAXLINE 2048

int main(int argc, char* argv[]){
    if(argc < 2){
        return 0;
    }
    
    int count = 1;
    int line;
    char buffer[MAXLINE];
    
    int Tlines = 0;

    FILE *fp = fopen(argv[1],"r");
    while((fgets(buffer, MAXLINE, fp)) != NULL){
        Tlines++;
        printf("%d %s",Tlines,buffer);
    }
    if(!Tlines){
        printf("file is empty\n");
        return 0;
    }
    rewind(fp);
    
    FILE *fdest = fopen("temp.txt","w");
    printf("enter the line to remove: ");
    if (scanf("%d",&line), (line > Tlines || line < 1)){
        printf("Invalid Line remove Operation\n");
        return 0;
    }
    
    while((fgets(buffer, MAXLINE, fp)) != NULL){
        if(count != line){
            fputs(buffer, fdest);
        }
        count++;
    }

    fclose(fp);
    fclose(fdest);
    remove(argv[1]);
    rename("temp.txt", argv[1]);

    fp = fopen(argv[1], "r");
    Tlines = 0;
    while((fgets(buffer, MAXLINE, fp)) != NULL){
        Tlines++;
        printf("%d %s",Tlines,buffer);
    }
    fclose(fp);

    printf("removed the %d line of %s file\n", line, argv[1]);
}
