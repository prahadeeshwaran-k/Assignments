#include <stdio.h>

char* my_strrchr(char *str, char ch) {
    char *last = NULL;
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            last = &str[i];
    }
    return last;
}

int main() {
    char str[100], ch;
    printf("Enter string: ");
    scanf("%s", str);
    printf("Enter character to find: ");
    scanf(" %c", &ch);
    char *res = my_strrchr(str, ch);
    if (res)
        printf("%s\n", res);
    else
        printf("Not found\n");
    return 0;
}