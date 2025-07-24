#include <stdio.h>
#include <string.h>
void my_strncpy(char *dest, const char *src, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (src[i] != '\0')
            dest[i] = src[i];
        else
            dest[i] = '\0';
    }
    dest[n] = '\0';
}

int main() {
    char src[100], dest[100];
    int n;
    printf("Enter source string: ");
    scanf("%s", src);
    printf("Enter number of characters to copy: ");
    scanf("%d", &n);
    my_strncpy(dest, src, n);
    printf("%s\n", dest);
    return 0;
}
