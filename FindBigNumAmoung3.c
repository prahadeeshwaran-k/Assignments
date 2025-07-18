//date:11/6/2025-wed
//chapter:control statement
//Title: Find the greatest number among three numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value for A: ");
    scanf("%d", &a);

    printf("Enter value for B: ");
    scanf("%d", &b);

    printf("Enter value for C: ");
    scanf("%d", &c);
    //10,20,30
    if(a==b && b==c){
        printf("all are equal");
    }
    else if((a>b) && (a>c)){
        printf("A is Greater");
    }
    else if((b>a) && (b>c)){
        printf("B is Greater");
    }
    else if((c>a) && (c>b)){
        printf("C is Greater");
    }
    else {
        printf("Some numbers might be equal, or no single number is strictly greatest.\n");
        
    }
}
