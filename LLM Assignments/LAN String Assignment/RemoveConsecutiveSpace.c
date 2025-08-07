#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[256] = "hello       vector      india\n";
    printf("Original: %s", str);

    int i = 0, j = 0;
    int space_seen = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j++] = str[i];
            space_seen = 0;
        } else {
            if (!space_seen) {
                str[j++] = ' ';
                space_seen = 1;
            }
        }
        i++;
    }

    // Remove trailing space if any
    if (j > 0 && str[j - 1] == ' ')
        j--;

    str[j] = '\0'; // Null-terminate the cleaned string

    printf("Cleaned  : %s\n", str);
    return 0;
}
