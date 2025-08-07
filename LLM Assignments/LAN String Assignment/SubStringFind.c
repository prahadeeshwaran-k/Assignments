
//llm
#include <stdio.h>
#include <string.h>

int countSubstring(const char *str, const char *substr) {
    int count = 0;
    int len_sub = strlen(substr);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (strncmp(&str[i], substr, len_sub) == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[256], substr[256];
    
    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove newline

    printf("Enter the substring to find: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = 0;  // Remove newline

    int result = countSubstring(str, substr);
    printf("Substring found %d times\n", result);

    return 0;
}
