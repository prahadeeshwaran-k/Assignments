//date:4/7/2025-fri
//chapter:Functions
//Title: Swap Function Call By Reference
// Description: This program swaps two numbers using a function and call by reference.
#include<stdio.h>
void swap(int *,int *);

int main(){
    int x = 10, y = 20;
    printf("Before: X = %d , Y = %d \n",x,y);
    swap(&x,&y);
    printf("After : X = %d , Y = %d \n",x,y);
}

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp; 
}