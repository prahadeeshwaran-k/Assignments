#include <stdio.h>

void my_strncat(char *dest, const char *src, int n) {
    int i, j;
    for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; j < n && src[j] != '\0'; j++)
        dest[i + j] = src[j];
    dest[i + j] = '\0';
}

int main() {
    char str1[200], str2[100];
    int n;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("Enter number of characters to concatenate: ");
    scanf("%d", &n);
    my_strncat(str1, str2, n);
    printf("%s\n", str1);
    return 0;
}