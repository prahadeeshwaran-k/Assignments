//date:14/6/2025-sat
//chapter:control statement
//Title: Perfect Number
// Description: This program checks whether a number is a perfect number or not.
//?What is a perfect number?

/*Perfect number is a positive integer that is equal to the sum of all its proper positive divisors excluding the number itself.*/

//! For example:

/*6,28 is a perfect number
Because the proper positive divisors of 6 are 1, 2 and 3 (excluding 6)
and sum of all its positive divisors i.e. 1 + 2 + 3 = 6*/

#include <stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    int i = 1, rem, sum = 0;

    while (i < num)
    {
        rem = num % i;
        if (rem == 0)
        {
            sum += i;
        }
        ++i;
    }
    if (sum == num)
    {
        printf("%d is a Perfect Number", num);
    }
    else
    {
        printf("%d is Not a Perfect Number", num);
    }
}
