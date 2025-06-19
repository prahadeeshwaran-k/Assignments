//2,145,40585
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
