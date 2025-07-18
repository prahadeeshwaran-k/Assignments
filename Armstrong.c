//Example of Armstrong numbers: 153,370,371,407,1634,9474,54748
//date:17/6/2025-sat
//chapter:control statement
//Title: Armstrong Number Checker
//Description: This program checks if a given number is an Armstrong number.

#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,sum=0,i=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    int n = (log10(num)+1);
    printf("number of digits : %d\n",n);
    temp = num;
    while (i <= n)
    {
        sum += pow((num%10),n);
        num /= 10;
        i++;
    }
    num = temp;
    if (sum == num)
        printf("%d is a Armsrtong number",num);
    else
        printf("%d is not a Armsrtong number",num);
    
}