#include <stdio.h>

int my_strcmp(const char *s1, const char *s2) {
    int i;
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    }
    return 0;
}

int main() {
    char a[100], b[100];
    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);
    printf("%d\n", my_strcmp(a, b));
    return 0;
}