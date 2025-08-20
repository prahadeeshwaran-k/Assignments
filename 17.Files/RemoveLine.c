//Write a Program to remove a Specific line from the given text file
#include<stdio.h>
#include<stdlib.h>   

int main(int argc, char* argv[]){
    if(argc<3){
        return 0;
    }
    int count = 1;   // start line numbering from 1
    int line = atoi(argv[2]);
    int ch;          // must be int for EOF

    FILE *fp = fopen(argv[1],"r");
    FILE *fdest = fopen("temp.txt","w");
    
    while((ch = fgetc(fp)) != EOF){
        if(count == line){
            // skip this line completely
            while ((ch = fgetc(fp)) != EOF && ch != '\n');
            count++;
            continue;   // don't write skipped chars!
        }
        fputc(ch, fdest);
        
        if(ch == '\n'){
            count++;
        }
    }
    fclose(fp);
    fclose(fdest);
    remove(argv[1]);
    rename("temp.txt", argv[1]);
}
