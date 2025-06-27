#include<stdio.h>
int main(){
    int count =0;
    int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int n = sizeof (arr) / sizeof(arr[0]);
    for(int i = 0; i < n ;i++){
        int temp = arr[i];
        for(int j = 2; j*j <= temp ; j++){
            if(arr[i]%j == 0){
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}