//date:1/7/2025-tues
//chapter:Strings
//Title: String Copy
// Description: This program copies one string to another.
#include<stdio.h>
int main(){
    char str1[100];
    char str2[100];
    printf("Enter the String to COPY :");
    scanf(" %s",&str1);
    int i = 0;
    while(str1[i])
    {
        str2[i] = str1[i];
        i++;
    }
    printf("%s",str1);
    printf("\n%s",str2);
}