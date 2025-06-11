#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("Enter value for A: ");
    scanf("%d", &a);

    printf("Enter value for B: ");
    scanf("%d", &b);

    printf("Select an Operation '+','-','*','/','%%'");
    scanf(" %c", &ch); //note before scanf of an char have a space with out space

    switch (ch)
    {
    case'+':
        printf("%d + %d = %d\n",a,b,a+b);
        break;
    case'-':
        printf("%d + %d = %d\n",a,b,a-b);
        break;
    case'*':
        printf("%d + %d = %d\n",a,b,a*b);
        break;
    case'/':
        b!=0 ?printf("%d + %d = %d\n",a,b,a/b):printf("B is zero\n");
        break;
    case'%':
        printf("%d + %d = %d\n",a,b,a%b);
        break;
    
    default:
        printf("Error: Invalid operation selected.\n");
        break;
    }
    
    return 0;
}