#include <stdio.h>
#include <math.h>

int main() {
    int past = 2;                // the last prime we saw
    for (int num = 3; num <= 100; num++) {
        int is_prime = 1;

        // check primality of num
        for (int j = 2; j <= (int)sqrt(num); j++) {
            if (num % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            // if this prime and the previous prime differ by 2, it's a twin pair
            if (num - past == 2) {
                printf("(%d, %d)\n", past, num);
            }
            past = num;  // update past to this prime
        }
    }

    return 0;
}
