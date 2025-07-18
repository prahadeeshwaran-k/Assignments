//date:4/7/2025-fri
//chapter:Functions
//Title: Prime Number Function
//Description:pass the value to a function to Display Fibonnaci Series upto give num value.

#include<stdio.h>
void fibonacci(int);
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    fibonacci(num);
}

void fibonacci(int num){
    int x=0,y=1,temp;
    for(x = 0 ; x < num ; x=y, y=temp){
        printf("%d ",x);
        temp = x+y;
    }
}