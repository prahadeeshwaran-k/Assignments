#include <stdio.h>

char* my_strstr(char *haystack, const char *needle) {
    int i, j;
    for (i = 0; haystack[i] != '\0'; i++) {
        for (j = 0; needle[j] != '\0'; j++) {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (needle[j] == '\0')
            return &haystack[i];
    }
    return NULL;
}

int main() {
    char str[100], sub[100];
    printf("Enter main string: ");
    scanf("%s", str);
    printf("Enter substring: ");
    scanf("%s", sub);
    char *res = my_strstr(str, sub);
    if (res)
        printf("%s\n", res);
    else
        printf("Not found\n");
    return 0;
}