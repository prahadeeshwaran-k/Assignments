#include <stdio.h>
#include <string.h>

int main() {
    char key[] = "hello";
    char pare[] = "hi";
    char buffer[] = "hi hello hi, say hello one more time";
    char buffer2[256] = {0}; // Initialize buffer to all zeros

    char* ptr = buffer; // Pointer to our current position in the source buffer
    char* dest = buffer2; // Pointer to our current position in the destination buffer
    char* temp;

    // Loop as long as we keep finding the key in the remaining part of the string
    while ((temp = strstr(ptr, key)) != NULL) {
        
        // 1. Copy the part of the string BEFORE the key
        strncpy(dest, ptr, temp - ptr);
        dest += (temp - ptr);

        // 2. Copy the replacement word ("pare")
        strcpy(dest, pare);
        dest += strlen(pare);

        // 3. Move the source pointer past the key we just replaced
        ptr = temp + strlen(key);
    }

    // 4. Copy the rest of the original string after the last match
    strcpy(dest, ptr);

    printf("Original: %s\n", buffer);
    printf("Replaced: %s\n", buffer2);

    return 0;
}