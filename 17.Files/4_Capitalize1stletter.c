// Program to capitalize the first letter of every word in a file
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fs = fopen("text.txt", "r+");
    if (fs == NULL) {
        printf("File not found!\n");
        return 1;
    }

    char ch;
    int flag = 1; 

    while ((ch = fgetc(fs)) != EOF) {
        if (flag && isalpha(ch)) {
            fseek(fs, -1, SEEK_CUR);
            fputc(toupper(ch), fs);
            flag = 0;
        } else if (ch == ' ' || ch == '\n' || ch == '\t') {
            flag = 1; 
        } else {
            flag = 0;
        }
    }

    fclose(fs);
    printf("Operation finished\n");
    return 0;
}
