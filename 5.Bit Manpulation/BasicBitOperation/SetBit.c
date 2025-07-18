//date:12/6/2025-sat
//chapter:control statement
//Title: Set the Specific Bit using Bit Manipulation
//Description: This program sets a specific bit using bit manipulation.
#include <stdio.h>
int main()
{
    int num, mask, pos, result, bit;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the position: ");
    scanf("%d", &pos);
    bit = sizeof(num) * 8 - 1;

    // print the given number
    printf("Before %d: ", num);
    for (int i = bit; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }

    mask = (1 << pos);
    result = num | mask;

    // print the given number
    printf("\nAfter %d: ", result);
    for (int i = bit; i >= 0; i--)
    {
        printf("%d", (result >> i) & 1);
    }
}