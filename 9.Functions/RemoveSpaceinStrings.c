// date:4/7/2025-thurs
// chapter:Strings
// Title: Remove Space in Strings
// Description: This program removes extra spaces in a given string.
// Example: "hello    vector   india" becomes "hellovectorindia"
#include <stdio.h>
#include <string.h>
char str[256] = "hello       vector      india\n";

int main()
{
    printf("%s", str);
    int size;
    size = strlen(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int j;
        if (str[i] == ' ')
        {
            for (j = i; j < size; j++)
            {
                str[j] = str[j + 1];
            }
            i--; // Go back one position to re-check (in case of multiple spaces)
        }
    }
    printf("%s", str);
}