/*
Explanation Table:
|  i  | absolute (|i|) | spaces (s<absolute) | numbers to print (2*(n-absolute)+1) |      Line Printed       |
|-----|----------------|---------------------|-------------------------------------|-------------------------|
| -3  |       3        |          3          |                 1                   |             1           |
| -2  |       2        |          2          |                 3                   |           1 2 3         |
| -1  |       1        |          1          |                 5                   |         1 2 3 4 5       |
|  0  |       0        |          0          |                 7                   |       1 2 3 4 5 6 7     |
|  1  |       1        |          1          |                 5                   |         1 2 3 4 5       |
|  2  |       2        |          2          |                 3                   |           1 2 3         |
|  3  |       3        |          3          |                 1                   |             1           |
*/

#include <stdio.h>
int main()
{
    int n = 3;
    for (int i = -n; i <= n; i++)
    {
        int absolute;
        if (i < 0)
            absolute = -i;
        else
            absolute = i;
        for (int space = 0; space < absolute; space++)
            printf("  "); // ! Must use "__" double space.
        for (int num = 0; num < 2 * (n - absolute) + 1; num++)
            printf("%d ", num + 1);
        printf("\n");
    }
}