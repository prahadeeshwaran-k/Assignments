/*Explanation Table for n = 4:

 |  i  | absolute(|i|) | spaces (n - |i|) | stars ((n - |i|)+1) | Line Printed   |
 |-----|---------------|-------------------|----------------------|----------------|
 | -4  |       4       |         0         |          1           | `*`            |
 | -3  |       3       |         1         |          2           | `**`           |
 | -2  |       2       |         2         |          3           | `***`          |
 | -1  |       1       |         3         |          4           | `****`         |
 |  0  |       0       |         4         |          5           | `*****`        |
 |  1  |       1       |         3         |          4           | `****`         |
 |  2  |       2       |         2         |          3           | `***`          |
 |  3  |       3       |         1         |          2           | `**`           |
 |  4  |       4       |         0         |          1           | `*`            |
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n =4;
    for(int i = -n ; i<=n ; i++ ){
        
        int absolute = abs(i);
        for(int star = 0 ;star < (n-absolute)+1 ; star++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
