//date:4/7/2025-fri
//chapter:Functions
//Title: Prime Number Function
// Description: This program checks whether a number is prime or not using a function if the number is prime return 0 otherwise return -1.
#include<stdio.h>
int prime(int);

int main(){
    
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int isprime = prime(num);

    if(isprime == -1){
        printf("not a prime number: %d",num);
    }
    else if (isprime == 0){
        printf("Yes its a Prime number: %d",num);
    }
    
}

int prime(int num)
{   
    if(num == 1){
        printf("A prime number is a whole number greater than 1");
    }
    
    int flag = 0;
    for(int i = 2;i*i<= num; i++){
        if(num%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag){
        return -1;
    }else{
        return 0;
    }
}