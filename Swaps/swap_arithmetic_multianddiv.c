#include<stdio.h>
int main(){
    int a,b;

    printf("Enter value for A: ");
    scanf("%d", &a);

    printf("Enter value for B: ");
    scanf("%d", &b);
    if(b!=0)
    {
        a=a*b;
        b=a/b;
        a=a/b;
        printf("-----------------------\n");
        printf("after Swap A: %d & B: %d",a,b );
    }
    else
    {
        printf("B is equal to 0");
    }
    
}