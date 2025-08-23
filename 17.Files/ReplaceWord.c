#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main() {
    char key[] = "Never";
    char pare[] = "hi";
    char buffer[257];
    char buffer3[256] = {0}; 
    FILE *fp = fopen("text.txt", "r");
    FILE *fd = fopen("revs.txt", "w");

    
    if (fp == NULL) {
        printf("File not found!\n");
        return 2;
    }
    system("cat text.txt");
    printf("\n");
    char* ptr = buffer; 
    char* dest = buffer3;
    char* temp;

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        while ((temp = strstr(ptr, key)) != NULL) {
        
        strncpy(dest, ptr, temp - ptr);
        dest += (temp - ptr);

        strcpy(dest, pare);
        dest += strlen(pare);

        ptr = temp + strlen(key);
        }
        strcpy(dest, ptr);
        fputs(buffer3,fd);
    }

    fclose(fd);
    fclose(fp);
    system("cat revs.txt");

    printf("\n");
    return 1;
}