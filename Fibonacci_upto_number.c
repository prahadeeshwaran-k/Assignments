#include<stdio.h>
int main(){
    int i=0, j=1,x,result=0;//!my mistake result was uninitilized 
    printf("Enter the Number: ");
    scanf("%d",&x);

    while(i<=x){ //!my mistake used the result in place of x
        printf("%d",i);
        result =i+j;
        i=j;
        j=result;
    }
    
    return 0;
}