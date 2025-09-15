#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("File does not exist\n");
        return 0;
    }

    fseek(fp, 0, SEEK_END);
    int  totalChars = ftell(fp); 
    rewind(fp);

    int lines = 0;
    int bigline = 0;
    int biglinelen = 0;
    char buffer[4096];  

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        int len = strlen(buffer);  
        lines++;
        if (len > biglinelen) {
            biglinelen = len;
            bigline = lines;
        }
    }

    printf("Total Characters        : %ld\n", totalChars);
    printf("Total No of Lines       : %d\n", lines);
    printf("Bigline Index number    : %d\n", bigline);
    printf("Bigline Total Characters: %d\n", biglinelen);

    fclose(fp);
    return 0;
}
