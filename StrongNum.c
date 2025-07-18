//2,145,40585
//1! + 4! + 5! = 1 + (4321) + (5432*1) = 1 + 24 + 120 = 145
//a positive integer that equals the sum of the factorials of its digits
#include<stdio.h>
int main(){
    int snum,rem,strong =0 ;
    printf("enter the number: ");
    scanf("%d",&snum);
    
    for(int s = snum;s>0;s/=10){
        rem = s%10;
        int fact =1;
        for(int i = rem; i>0; i--){
                fact *= i;
        }
        strong +=fact;
    }
    if(snum == strong){
        printf("Strong");
    }
    else{
        printf("not Strong");
    }
}
