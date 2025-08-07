/*
7)WAP to declare an array of string pointers. Use function “input” to input the strings 
      from stdin into array of string pointers, sort them in assending order according to string length.
      
Note: Use DMA.
Enter number of strings: 3
Enter string 1: apple
Enter string 2: cat
Enter string 3: elephant

Strings sorted by length:
cat
apple
elephant
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100   // Max number of strings
#define SIZE 100  // Max string size (temp buffer)

// Function to input strings with DMA
void input(char *arr[], int n) {
    char temp[SIZE];
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", temp);  // doesn't allow spaces
        arr[i] = (char *)malloc(strlen(temp) + 1);
        if (arr[i] == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
        strcpy(arr[i], temp);
    }
}

// Function to sort strings by length (ascending)
void sortByLength(char *arr[], int n) {
    char *temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strlen(arr[i]) > strlen(arr[j])) {
                // Swap pointers
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    char *strArray[MAX];

    printf("Enter number of strings: ");
    scanf("%d", &n);

    // Input strings
    input(strArray, n);

    // Sort by length
    sortByLength(strArray, n);

    // Print sorted strings
    printf("\nStrings sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strArray[i]);
        free(strArray[i]);  // Free allocated memory
    }

    return 0;
}
