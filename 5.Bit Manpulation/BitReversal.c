#include<stdio.h>
int main(){
    int num,mask;
    printf("Enter the number: ");
    scanf("%d",&num);

    int n = sizeof(num)*8-1;

    printf("Before %d \n",num);
    for(int i = n;i>=0;i--){
        printf("%d",(num>>i)&1);
    }

    //Swaping
    for(int i=0,j=31;j>i;i++,j--){
        if((num >> i)&1 != (num>>j)&1){
            mask = (1<<i) + (1<<j);
            num = num ^ mask;
        }
    }

    printf("\nAfter %d \n",num);
    for(int i = n;i>=0;i--){
        printf("%d",(num>>i)&1);
    }
}