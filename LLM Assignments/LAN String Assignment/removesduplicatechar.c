/*
11) Write a program to delete the duplicate characters in a given string.
    Ex: Input : vecteeovvorr
     Output : vector */
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);  // use scanf for word input (no spaces)

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; ) {
            if (str[i] == str[j]) {
                // Shift all characters left to remove duplicate
                for (k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
            } else {
                j++;
            }
        }
    }

    printf("After removing duplicates: %s\n", str);
    return 0;
}
