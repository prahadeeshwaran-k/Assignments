#include<stdio.h>
int main(){
    int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int n, odd=0, even=0;
    n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        if(arr[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even :%d ,Odd :%d",even,odd);

}