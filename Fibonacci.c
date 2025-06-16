//date:14/6/2025-sat
//chapter:control statement
//Title: Fibonacci Series
// Description: This program generates the Fibonacci series up to a given number of terms.
#include<stdio.h>
int main(){
    int i=0, j=1,x,result;
    printf(" enter how many series:");
    scanf("%d",&x);
    if(x==0){
        j= 0;
    }
    else if (x==1){
        j=1;
    }
    else{
        while (x != 0)
        {
            printf("%d",i);
            result = i+j;
            i=j;
            j=result;
            x--;
        }
    }
    
   
    
}
