//tempcode
#include<stdio.h> 
#include<string.h>
    int main() {
        printf("\033[1;31mThis text is bold red.\033[0m\n"); // Bold red, then reset
        printf("\033[0;34mThis text is blue.\033[0m\n");     // Blue, then reset
        return 0;
    }