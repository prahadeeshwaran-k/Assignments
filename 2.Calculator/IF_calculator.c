//date:11/6/2025-wed
//chapter:control statement
//Title: Simple Calculator using IF Statement
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
    
    if(ch == '+')
        printf("%d + %d = %d\n",a,b,a+b);
    else if(ch == '-')
        printf("%d + %d = %d\n",a,b,a-b);
    else if(ch == '*')
        printf("%d + %d = %d\n",a,b,a*b);
    else if(ch == '/'){
        if(b != 0){
            printf("%d + %d = %d\n",a,b,a/b);
        }
        else{
            printf("B is zero\n");
        }
    }
    else if(ch == '%')
        if(b != 0){
            printf("%d %% %d = %d\n",a,b,a%b);
        }
        else{
            printf("B is zero\n");
        }
       
    else { 
        printf("Error: Invalid operation selected.\n");
    }
    return 0;
}
