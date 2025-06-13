//date:10/5/2025-tue
//chapter:operators
//Title: Swap two numbers using arithmetic operations
#include<stdio.h>
int main(){
    int a,b;

    printf("Enter value for A: ");
    scanf("%d", &a);

    printf("Enter value for B: ");
    scanf("%d", &b);
    if(b!=0)
    {
        a=(a*b) / (a=b);
        printf("-----------------------\n");
        printf("after Swap A: %d & B: %d",a,b );
    }
    else
    {
        printf("B is equal to 0");
    }
    
}