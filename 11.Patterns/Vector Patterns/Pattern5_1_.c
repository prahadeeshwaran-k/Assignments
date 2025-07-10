/*
Explanation Table:
|  i  | absolute (|i|) | spaces (n - absolute) | stars (absolute + 1) |     Line Printed     |
|-----|----------------|------------------------|------------------------|-------------------|
| -3  |       3        |           0            |           4            | A B C D           |
| -2  |       2        |           1            |           3            | _A B C            |
| -1  |       1        |           2            |           2            | __A B             |
|  0  |       0        |           3            |           1            | ___A              |
|  1  |       1        |           2            |           2            | __A B             |
|  2  |       2        |           1            |           3            | _A B C            |
|  3  |       3        |           0            |           4            | A B C D           |
*/

#include <stdio.h>
int main()
{
    int n = 3;
    char ch = 'A';
    for (int i = -n; i <= n; i++)
    {
        int absolute;
        if (i < 0)
            absolute = -i;
        else
            absolute = i;
        for (int space = 0; space < n - absolute; space++)
            printf(" ");
        for (int star = 0; star < absolute + 1; star++)
            printf("%c ", ch + star);
        printf("\n");
    }
}