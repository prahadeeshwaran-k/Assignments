// date:14/6/2025-sat
// chapter:control statement
// Title: Palindrome
// Description: This program checks whether a given number is a palindrome or not.
//? Class notes

#include <stdio.h>
int main()
{
    int temp, num, rev = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    temp = num;

    while(num!=0){ // num!=0 or num both are same num idea is from kamalash
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    if (temp == rev)
    {
        printf("The Given Number is Palindrome!");
    }
    else
    {
        printf("The Given Number is Not a Palindrome!");
    }
}
