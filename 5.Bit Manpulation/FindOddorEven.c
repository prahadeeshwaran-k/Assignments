#include<stdio.h>
int main(){
    int bit,mask;
    mask = 1<<0;
    printf("enter the number: ");
    scanf("%d",&bit);

    if((bit&mask)==0){
        printf("The given number is even: ");
    }else{
        printf("The given number is odd: ");
    }

}