//Class Program
/*
1 
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
#include<stdio.h>
int main(){
    int n = 5,d;
    for(int i = 1;i<=n;i++){
        d=1;
        for(int j = 1; j<=i ; j++,d=!d){
            printf("%d ",d);
        }
        printf("\n");
    }
}