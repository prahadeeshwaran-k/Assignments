//date:10/6/2025-wed
//chapter:control statement
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter value for A: ");
    scanf("%d", &a);

    printf("Enter value for B: ");
    scanf("%d", &b);

    printf("Enter value for C: ");
    scanf("%d", &c);

    
    if (a >= b && a >= c) {
        if ((a == b) || (a == c)) {
            //printf("A is greatest and equal to ");
            if (a == b && a == c) {
                printf("All three numbers are equal: %d = %d = %d\n", a, b, c);
            } else if (a == b) {
                //printf("B\n");
                printf("A = B");
            } else {
                //printf("C\n");
                printf("A = C");
            }
        } else {
            printf("A is the greatest: %d\n", a);
        }
    }
    else if (b >= a && b >= c) {
        if (b == c) {
            printf("B = C");
        } else {
            printf("B is the greatest: %d\n", b);
        }
    }
    else {
        printf("C is the greatest: %d\n", c);
    }

    return 0;
}
