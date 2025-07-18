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

    a=a+b;
    b=a-b;
    a=a-b;
    printf("-----------------------\n");
    printf("after Swap A: %d & B: %d",a,b );
}