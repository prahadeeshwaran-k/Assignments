#include <stdio.h>

void my_strcat(char *dest, const char *src) {
    int i, j;
    for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; src[j] != '\0'; j++)
        dest[i + j] = src[j];
    dest[i + j] = '\0';
}

int main() {
    char str1[200], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    my_strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}
