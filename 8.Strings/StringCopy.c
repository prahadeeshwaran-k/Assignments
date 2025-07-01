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