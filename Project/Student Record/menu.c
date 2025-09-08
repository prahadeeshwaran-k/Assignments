#include <stdio.h>
#include <string.h>
#include"colour.h"

void border(int width){
    for (int i = 0; i < width; i++)
        printf(COLOR_208"-"RESET);
    printf("\n");
}
void printTitle(const char *title, int width) {
    int len = strlen(title);
    if (len > width - 2) len = width - 2;

    int padding = (width - len - 2) / 2; 
    int rightPadding = width - len - 2 - padding;

    printf(COLOR_208 "|" RESET);

    for (int i = 0; i < padding; i++) 
        printf("*");

    printf(COLOR_46 "%s" RESET, title);

    for (int i = 0; i < rightPadding; i++) 
        printf("*");

    printf(COLOR_208 "|\n" RESET); 
}


void printMenu(char menu[][50], int size,char *title) {
    int i, j;
    int maxLen = 0;

    for (i = 0; i < size; i++) {
        int len = strlen(menu[i]);
        if (len > maxLen)
            maxLen = len;
    }

    int width = maxLen + 4;
    
    border(width);
    printTitle(title, width);

    border(width);

    for (i = 0; i < size; i++) {
        int len = strlen(menu[i]);
        printf(COLOR_208"| "RESET COLOR_198"%s"RESET, menu[i]);

        // Padding spaces
        for (j = 0; j < (maxLen - len); j++)
            printf(" ");
        printf(COLOR_208" |\n"RESET);
    }

    border(width);
}



