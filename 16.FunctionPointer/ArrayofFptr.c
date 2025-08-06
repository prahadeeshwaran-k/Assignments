#include <stdio.h>

// Functions with same signature: int func(int, int)
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divi(int a, int b) { return b != 0 ? a / b : 0; }  // basic divide with check

int main() {
    // Declare array of 4 function pointers
    int (*fptr[4])(int, int);

    // Assign functions to the array
    fptr[0] = add;
    fptr[1] = sub;
    fptr[2] = mul;
    fptr[3] = divi;

    int x = 20, y = 5;

    // Call each function using the array
    for (int i = 0; i < 4; i++) {
        printf("Result %d: %d\n", i, fptr[i](x, y));
    }

    return 0;
}
