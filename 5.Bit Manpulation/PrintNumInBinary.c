#include<stdio.h>
int main(){
    int num,mask,bit;
    printf("Enter the number: ");
    scanf("%d",&num);
    bit = sizeof(num)*8-1;
    while(bit >= 0){
        printf("%d",(num>>bit)&1);
        //printf("%d ",num&(1<<bit)); //* Dont use it, number: 57 -> 0 0 0 0 0 ....... 0 0 0 0 0 32 16 8 0 0 1 
        bit--;
    }
    
}