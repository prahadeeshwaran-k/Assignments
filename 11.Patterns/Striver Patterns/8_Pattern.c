#include<stdio.h>
int main(){
    int n= 5;
    int space = 2*(n-1);
    for(int i = 0 ;i <n;i++){
        for(int star = 0; star<=i;star++){
            printf("* ");
        }
        for(int j = 0;j <  space ; j++)
        {
            printf("  ");
        }
        for(int star = 0; star<=i;star++){
            printf("* ");
        }
        printf("\n");
        space-=2;
    }
}