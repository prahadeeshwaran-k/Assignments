//date:19/6/2025-sat
//chapter:control statement
//Title: Find the Specific Bit using Bit Manipulation
//Description: This program checks if a given bit is set or not using bit manipulation.
#include<stdio.h>
int main(){
    int bit,mask,val;
    printf("enter the number: ");
    scanf("%d",&bit);
    printf("enter the Specfic Bit: ");
    scanf("%d",&val);
    if(val<32 && val >=0){
        mask = 1<<val;
    }else{
        printf("enter the Specfic Bit in the Range 0..31");
        return 0;
    }

    if((bit&mask)==0){
        printf("it is Not Set '0'");
    }else{
        printf("it is Set '1'");
    }

}