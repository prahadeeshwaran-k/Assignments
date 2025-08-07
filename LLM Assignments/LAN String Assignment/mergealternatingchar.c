/*
16) Write a program to accept two strings from user into two character array and copy one 
    by one character into another destination array.
	Ex: First String      : “abcdefg”
        Second String : “1234”
	then  Destination String  is  “a1b2c3d4efg”
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], dest[200];
    int i = 0, j = 0, k = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Get lengths
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Interleave characters
    while (i < len1 && j < len2) {
        dest[k++] = str1[i++];
        dest[k++] = str2[j++];
    }

    // Copy remaining characters of str1
    while (i < len1) {
        dest[k++] = str1[i++];
    }

    // Copy remaining characters of str2
    while (j < len2) {
        dest[k++] = str2[j++];
    }

    // Null terminate the destination string
    dest[k] = '\0';

    printf("Destination string: %s\n", dest);

    return 0;
}
