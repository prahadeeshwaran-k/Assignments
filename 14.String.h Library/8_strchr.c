#include <stdio.h>

char* my_strchr(const char *str, const char ch) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            return &str[i];
    }
    return NULL;
}

int main() {
    char str[100], ch;
    printf("Enter string: ");
    scanf("%s", str);
    printf("Enter character to find: ");
    scanf(" %c", &ch);
    char *res = my_strchr(str, ch);
    if (res)
        printf("%s\n", res);
    else
        printf("Not found\n");
    return 0;
}
