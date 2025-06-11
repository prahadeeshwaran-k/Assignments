#include<stdio.h>
int main(){
    int a,b;

    printf("Enter value for A: ");
    scanf("%d", &a);

    printf("Enter value for B: ");
    scanf("%d", &b);

    a=(a+b) - (a=b);

    printf("-----------------------\n");
    printf("after Swap A: %d & B: %d",a,b );
}