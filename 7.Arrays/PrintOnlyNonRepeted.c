#include<stdio.h>
int main(){
    int arr[10]={10,20,50,80,50,20,10,40,70,60};
    int count,found;
    for (int i = 0; i < 10; i++)
    {
        found = 0;
        count = 1;
        for (int j = 0; j < i ; j++)
        {
            if(arr[i]==arr[j]){
                found =1;
                break;
            }
        }

        if(found){
            continue;
        }
        for(int j = i +1;j<10;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        
        if(count == 1){
            printf("\n%d",arr[i]);
        }
    }
    
}