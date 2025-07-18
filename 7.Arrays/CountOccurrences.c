// date:26/6/2025-thur
// chapter:Arrays
// Title: Write a program to enter 10 elements into an array and find the particular given element is present or not. If present display that how many no.of times the  element is present

#include <stdio.h>
int main()
{
    int num, count = 0;
    int arr[10];
    printf("Enter 10 numbers in the Array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", arr + i);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }

    if (count)
    {
        printf("Yes, %d is present and occurred %d times.\n", num, count);
    }
    else
    {
        printf("No, %d is not present in the array.\n", num);
    }

    return 0;
}