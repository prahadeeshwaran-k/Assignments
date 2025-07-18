/*
12345
1234
123
12
1
*/
#include <stdio.h>

int main()
{   
    printf("Enter the number for Pattern: ");
    int n;
    scanf("%d",&n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i ; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
}