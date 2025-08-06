#include <stdio.h>
#include <ctype.h>  // for tolower()

int isVowel(char ch) {
    ch = tolower(ch);  // Convert to lowercase for easy checking
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str);  // ⚠️ gets is unsafe, better use fgets in real applications

    while (str[i] != '\0') {
        if (!isVowel(str[i])) {
            result[j++] = str[i];
        }
        i++;
    }
    result[j] = '\0';  // Null-terminate the result string

    printf("String without vowels: %s\n", result);
    return 0;
}
