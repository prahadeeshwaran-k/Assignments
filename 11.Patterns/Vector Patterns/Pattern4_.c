
/*
Explanation Table:
|  i  | absolute (|i|) | spaces (absolute) | stars (n - absolute + 1) |    Line Printed    |
|-----|----------------|-------------------|---------------------------|---------------------|
| -4  |       4        |         4         |             1             |   ____*             |
| -3  |       3        |         3         |             2             |   ___* *            |
| -2  |       2        |         2         |             3             |   __* * *           |
| -1  |       1        |         1         |             4             |   _* * * *          |
|  0  |       0        |         0         |             5             |   * * * * *         |
|  1  |       1        |         1         |             4             |   _* * * *          |
|  2  |       2        |         2         |             3             |   __* * *           |
|  3  |       3        |         3         |             2             |   ___* *            |
|  4  |       4        |         4         |             1             |   ____*             |
*/

#include <stdio.h>
int main()
{
    int n = 4;

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
            printf("* "); // ! Must use "*_" star and single space.
        }
        printf("\n");
    }
}