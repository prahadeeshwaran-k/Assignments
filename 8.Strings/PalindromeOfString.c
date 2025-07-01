#include<stdio.h>
int main(){

    char str[100];
    printf("Enter a Word to Check Palindrom :");
    scanf(" %s",&str);
    int n = 0, palindrom = 0;
    while (str[n])
    {
        n++;
    }
    
    for (int i = 0 ,j = n -1; i < j; i++,j--)
    {
        if(str[i] != str[j]){
            palindrom = 1;
            break;
        }
    }

    if(palindrom){
        printf("Not a Palindrom");
    }else{
        printf("Palindrom");
    }
    
}