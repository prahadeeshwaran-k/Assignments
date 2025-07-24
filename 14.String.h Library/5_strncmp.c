#include <stdio.h>

int my_strncmp(const char *s1, const char *s2, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        if (s1[i] == '\0')
            break;
    }
    return 0;
}

int main() {
    char a[100], b[100];
    int n;
    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);
    printf("Enter number of characters to compare: ");
    scanf("%d", &n);
    printf("%d\n", my_strncmp(a, b, n));
    return 0;
}