#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Comparator for qsort()
int comp(const void* a, const void* b) {
  	return strcmp((char*)a, (char*)b);
}

int anagram(char *s1, char *s2) {
  
    // If lengths are not the same, they cannot be anagrams
    if (strlen(s1) != strlen(s2))
        return 0;

    // Sort both strings
    qsort(s1, strlen(s1), sizeof(char), comp);
    qsort(s2, strlen(s2), sizeof(char), comp);

    // If the sorted strings are the same, they are anagrams
    return strcmp(s1, s2) == 0;
}

int main() {
    char s1[] = "listen";
    char s2[] = "geeks";

    // Checking if s1 and s2 are anagram
    if (anagram(s1, s2))
        printf("Anagrams");
    else
        printf("Not Anagrams");
  
    return 0;
}
