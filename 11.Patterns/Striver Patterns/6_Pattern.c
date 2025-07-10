/*
 Pattern    | S | I | Formule (I*2)+1       | Sp
____*___    | 1 | 0 | (0*2) + 1 = 0 + 1 = 1 | 4
___***___   | 3 | 1 | (1*2) + 1 = 2 + 1 = 3 | 3
__*****__   | 5 | 2 | (2*2) + 1 = 4 + 1 = 5 | 2
_*******_   | 7 | 3 | (3*2) + 1 = 6 + 1 = 7 | 1
*********   | 9 | 4 | (4*2) + 1 = 8 + 1 = 9 | 0
*/
#include <stdio.h>

int main()
{   
    printf("Enter the number for Pattern: ");
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i<n ; i++){
        for(int s = 0 ; s < n-i-1 ; s++)
            printf(" ");
        for(int st = 0; st < (i*2)+1 ; st++)
            printf("*");
        for(int s = 0 ; s < n-i-1 ; s++)
            printf(" ");
            
        printf("\n");
    }
}