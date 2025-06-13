//date:13/6/2025-fri
//chapter:control statement
//Title: Print Numbers in a Range
// This program prints numbers in a given range from i to n and then from n to i.
#include<stdio.h>
int main(){
    int i,n,temp;
    printf("Enter the number: ");
    scanf("%d %d",&i,&n);
    temp = i;

    while(i<=n){
        printf("%d ",i);
        i++;
    }
    printf("\n");
    i=temp;
    while (i>=n)
    {
        printf("%d ",i);
        i--;
    }
    printf("\n");
    

}