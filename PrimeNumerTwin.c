/*
Enter a number: 30
Twin prime numbers up to 30:
(3, 5)
(5, 7)
(11, 13)
(17, 19)
(29, 31)
*/

/*
Why? for (int i = 2; i <= n - 2; i++)
i = 2 → checks (2, 4)
i = 3 → checks (3, 5)
i = 4 → checks (4, 6)
i = 5 → checks (5, 7)
i = 6 → checks (6, 8)
i = 7 → checks (7, 9)
i = 8 → checks (8, 10)*/
#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return 0;
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Twin prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            printf("(%d, %d)\n", i, i + 2);
        }
    }

    return 0;
}
