#include <stdio.h>

void my_strcpy(char *dest, const char *src) {
    int i;
    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
}

int main() {
    char src[100], dest[100];
    printf("Enter source string: ");
    scanf("%s", src);
    my_strcpy(dest, src);
    printf("%s\n", dest);
    return 0;
}