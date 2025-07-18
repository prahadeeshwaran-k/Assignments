//date:1/7/2025-tues
//chapter:Strings
//Title: Reverse The String
//Description: This program reverses the words in a given string.
#include<stdio.h>
int main(){
    char str[] = "Vanakkam Chennai Hello!";
    printf("Before : %s",str);
    int n = sizeof(str)-1;
    char temp;
    for(int i = 0, j = n -1 ; i<j ; i++ ,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("\nAfter  : %s",str);
}