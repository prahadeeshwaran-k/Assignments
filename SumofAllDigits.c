//date:13/6/2025-fri
//chapter:control statement
//Title:Sum of All Digits in a Number

#include<stdio.h>
int main(){
    int num,sum =0 ;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The Sum: ");

    while (num !=0){
        sum += num%10;
        printf("%d + ",num%10);
        num /= 10;
    }
    printf("= %d",sum);

}