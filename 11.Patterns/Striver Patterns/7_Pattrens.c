/*        | s | n*2-(i*2 + 1) |      | s |
********* | 9 | 5*2-(0*2 + 1) | 10-1 | 9 |
_*******_ | 7 | 5*2-(1*2 + 1) | 10-3 | 7 |
__*****__ | 5 | 5*2-(2*2 + 1) | 10-5 | 5 |
___***___ | 3 | 5*2-(3*2 + 1) | 10-7 | 3 |
____*____ | 1 | 5*2-(4*2 + 1) | 10-9 | 1 |
*/ 
#include <stdio.h>

int main()
{   
    printf("Enter the number for Pattern: ");
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i<n ; i++){
        for(int s = 0 ; s < i ; s++)
            printf(" ");
        for(int st = 0; st < 2*n - ((i*2)+1) ; st++)
            printf("*");
        for(int s = 0 ; s < i; s++)
            printf(" ");

        printf("\n");
    }
}
