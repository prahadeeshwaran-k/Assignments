/*
WAP to check given matrix is an identity matrix or not.
Ex:
Identity Matrix is the matrix which is n × n square matrix where the diagonal consist of ones     	and the other elements are all zeros.

Input:

less
Copy
Edit
Enter the size of the square matrix (n x n): 3
Enter the elements of the matrix:
Element [0][0]: 1
Element [0][1]: 0
Element [0][2]: 0
Element [1][0]: 0
Element [1][1]: 1
Element [1][2]: 0
Element [2][0]: 0
Element [2][1]: 0
Element [2][2]: 1
      */
#include <stdio.h>

int main() {
    int n, i, j, isIdentity = 1;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for identity matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j && matrix[i][j] != 1) {
                isIdentity = 0;
                break;
            }
            else if (i != j && matrix[i][j] != 0) {
                isIdentity = 0;
                break;
            }
        }
        if (!isIdentity)
            break;
    }

    if (isIdentity)
        printf("\nThe matrix is an Identity Matrix.\n");
    else
        printf("\nThe matrix is NOT an Identity Matrix.\n");

    return 0;
}
