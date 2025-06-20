//date:20/6/2025-sat
//chapter:control statement
//Title: Clear the Specific Bit using Bit Manipulation
//Description: This program clears a specific bit using bit manipulation.
#include<stdio.h>
int main(){
    int num,mask,n,pos,result;
    n=sizeof(num)*8-1;

    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the position: ");
    scanf("%d", &pos);

    //Print the element First.
    printf("Before %d : ",num);
    for(int i = n ; i>=0 ; i--){
        printf("%d",(num>>i)&1);
    }

    mask = ~(1 << pos);
    result = num & mask;

    //Print the element First.
    printf("\nAfter %d : ",result);
    for(int i = n ; i>=0 ; i--){
        printf("%d",(result>>i)&1);
    }

}