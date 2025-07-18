//date:19/6/2025-sat
//chapter:control statement
//Title: Find Neg or Pos using Bit Manipulation
//Description: This program checks if a given number is negative or positive using bit manipulation.
#include <stdio.h>
int main()
{
    int flag;
    char ch;

    int i;
    short int s;
    char c;
    long long int l;
    printf("Select the Datatype \ni = Int\ns = Short int\nc = Char\nl = long long int\n");
    printf("Enter the Datatype character: ");
    scanf("%c", &ch);
    printf("-----------------------------------");
    switch (ch)
    {
    case 'i':
        printf("Enter the Int Number: ");
        scanf("%d", &i);
        flag = i & (1 << ((sizeof(i) * 8) - 1)) ? 1 : 0;
        break;
    case 's':
        printf("Enter the Int Number: ");
        scanf("%hd", &s);
        flag = s & 1 << ((sizeof(s) * 8) - 1) ? 1 : 0;
        break;
    case 'c':
        printf("Enter the Int Number: ");
        scanf("%c", &c);
        flag = c & (1 << ((sizeof(c) * 8) - 1)) ? 1 : 0;
        break;
    case 'l':
        printf("Enter the Int Number: ");
        scanf("%lld", &l);
        flag = l & (1LL << ((sizeof(l) * 8) - 1)) ? 1 : 0;
        break;
    default:
        printf("Not a valid Data");
        break;
    }
    printf("-----------------------------------");
    if (flag)
    {
        printf("The number is Negative");
    }
    else
    {
        printf("The number is Positive");
    }
}