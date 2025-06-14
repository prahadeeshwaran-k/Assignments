//date:14/6/2025-sat
//chapter:control statement
//Title: Reverse Number
// Description: This program reverses a given number using a while loop.
//? Class notes
#include<stdio.h>
int main(){
    int num,rev=0;
    printf("Enter a number to reverse: ");
    scanf("%d",&num);

    while(num){//num!=0 or num both are same num idea is from kamalash
        rev = (rev*10)+(num%10);
        num/=10;
    }
    printf("%d",rev);
}