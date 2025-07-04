//date:1/7/2025-tues
//chapter:Strings
//Title: Num of Occurrence
//Description: This program finds and counts the number of occurrences of each character in a string.
#include<stdio.h>
int main(){
    char str[100];
    printf("enter the String: ");
    scanf("%s",str);//Should be: scanf("%s", str); No & is needed with character arrays.
    int n = 0 ;
    while(str[n]){
        n++;
    }

    int flag,count;
    for(int i = 0;i<n-1;i++){
        flag  = 0 ;
        count = 1 ;
        for(int j = 0; j<i;j++){
            if(str[i] == str[j]){
                flag = 1;
                break;
            }
        }
        if(flag){
            continue;
        }
        for(int j = i+1; j < n; j++)
        {
            if(str[j]==str[i]){
                count++;
            }
        }
        if(count){
            printf("\n%c = %d",str[i],count);
        }
        
    }    
}