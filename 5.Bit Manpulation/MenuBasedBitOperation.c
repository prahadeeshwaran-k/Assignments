//date:20/6/2025-sat
//chapter:control statement
//Title: Menu Based Bit Operation
//Description: This program performs various bit manipulation operations based on user choice.
#include<stdio.h>
int main(){
    int num,mask,n,pos,result,op;
    n=sizeof(num)*8-1;
    printf("Select the Operation Want to Perform\n1 = Set Bitn\n2 = Clear Bitn\n3 = Toggle Bit\nOption: ");
    scanf("%d",&op);
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the position: ");
    scanf("%d", &pos);

    // print the given number
    printf("Before %d: ", num);
    for (int i = n ;  i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }

    switch (op)
    {
    case 1:
        mask = (1 << pos);
        result = num | mask;
        break;
    
    case 2:
        mask = ~(1 << pos);
        result = num & mask;
        break;

    case 3:
        mask = 1 << pos;
        result = num ^mask;
        break;
    
    default:
        printf("NOT a Valid Opetion");
        break;
    }

     // print the given number
    printf("\nAfter %d: ", result);
    for (int i = n ; i >= 0; i--)
    {
        printf("%d", (result >> i) & 1);
    }

}