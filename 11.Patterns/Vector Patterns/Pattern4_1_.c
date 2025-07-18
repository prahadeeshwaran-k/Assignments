
/*
Explanation Table:
|  i  | absolute (|i|) | spaces (absolute) | stars (n - absolute + 1) |    Line Printed    |
|-----|----------------|-------------------|---------------------------|-------------------|
| -4  |       4        |         4         |             1             |   ____1           |
| -3  |       3        |         3         |             2             |   ___1 2          |
| -2  |       2        |         2         |             3             |   __1 2 3         |
| -1  |       1        |         1         |             4             |   _1 2 3 4        |
|  0  |       0        |         0         |             5             |   1 2 3 4 5       |
|  1  |       1        |         1         |             4             |   _1 2 3 4        |
|  2  |       2        |         2         |             3             |   __1 2 3         |
|  3  |       3        |         3         |             2             |   ___1 2          |
|  4  |       4        |         4         |             1             |   ____1           |
*/

#include <stdio.h>
int main()
{
    int n = 4;
    int num = 1;
    for (int i = -n; i <= n; i++)
    {
        int absolute;
        if (i < 0)
            absolute = -i;
        else
            absolute = i;

        for (int space = 0; space < absolute; space++)
        {
            printf(" "); // ! Must use "_" single space.
        }
        for (int star = 0; star < ((n - absolute) + 1); star++)
        {
            printf("%d ", num + star); // ! Must use "num_" num and single space.
        }
        printf("\n");
    }
}