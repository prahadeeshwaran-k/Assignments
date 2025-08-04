#include <stdio.h>
#include <string.h>

int anagram(char *s1, char *s2) {

    // Count arrays
    int c1[256] = {0};
    int c2[256] = {0};

    // Count frequency of s1's characters
  	int i = 0;
    while(s1[i]) c1[s1[i++]]++;
    
    // Count frequency of s2's characters
  	i = 0;
    while(s2[i]) c2[s2[i++]]++;


    // If any character count mismatch
    // strings are not anagrams
    for (int i = 0; i < 256; i++) {
        if (c1[i] != c2[i]) return 0;
    }

  	// Strings are anagram is all frequencies match
    return 1;
}

int main() {
    char s1[] = "listen";
    char s2[] = "silent";

  	// Checking if s1 and s2 are anagram
    if (anagram(s1, s2))
        printf("Anagrams");
    else
        printf("Not Anagrams");

    return 0;
}
