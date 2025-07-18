/*
Explanation Table:
|  i  | absolute (|i|) | spaces (n - absolute) | stars (absolute + 1) |     Line Printed     |
|-----|----------------|------------------------|------------------------|-------------------|
| -3  |       3        |           0            |           4            | * * * *           |
| -2  |       2        |           1            |           3            | _* * *            |
| -1  |       1        |           2            |           2            | __* *             |
|  0  |       0        |           3            |           1            | ___*              |
|  1  |       1        |           2            |           2            | __* *             |
|  2  |       2        |           1            |           3            | _* * *            |
|  3  |       3        |           0            |           4            | * * * *           |
*/

#include<stdio.h>
int main(){
    int n =3;
    for(int i = -n ; i<=n;i++){
        int absolute ;
        if(i<0)
            absolute = -i;
        else
            absolute = i;
        for (int space = 0; space < n - absolute ; space++)
            printf(" ");
        for (int star = 0; star < absolute + 1 ; star++)
            printf("* ");
        printf("\n");
        
    }
}