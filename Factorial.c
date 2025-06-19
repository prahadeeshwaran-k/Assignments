#include<stdio.h>
int main(){
        int num,fact =1 ;
        printf("enter the number: ");
        scanf("%d",&num);
        for(int i =num; i>0; i--){
                fact *= i;
        }
        printf("%d",fact);
}
