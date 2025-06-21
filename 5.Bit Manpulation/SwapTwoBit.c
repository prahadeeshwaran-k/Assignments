#include <stdio.h>
int main()
{
    int num, pos1, pos2, mask;
    printf("Enter the Number: ");
    scanf("%d", &num);
    int n = sizeof(num) * 8 - 1;

    for (int i = n; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }

    printf("\n Enter the Postion 1 and 2: ");
    scanf("%d %d", &pos1, &pos2);

    if ((num >> pos1) & 1 != (num >> pos2))
    {
        mask = (1 << pos1) + (1 << pos2);
        num = num ^ mask;
        // num = num^(1<<pos1);
        // num = num^(1<<pos2);
    }

    for (int i = n; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
}