#include <stdio.h>

int my_strlen(const char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("%d\n", my_strlen(str));
    return 0;
}