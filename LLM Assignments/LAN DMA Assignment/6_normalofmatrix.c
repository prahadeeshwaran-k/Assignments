/*
Normal = sqrt(7*7+ 8*8 + 9*9 + 6*6 + 1*1 + 2*2 + 5*5 + 4*4 + 3*3)
WAP to find normal of matrix.
     Ex:
     Normal of the matrix is the square root of the sum of all the elements.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;
    int matrix[100][100];
    int trace = 0;
    int sumSquares = 0;
    double normal;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate trace and sum of squares
    for (i = 0; i < n; i++) {
        trace += matrix[i][i];  // diagonal
        for (j = 0; j < n; j++) {
            sumSquares += matrix[i][j] * matrix[i][j];
        }
    }

    normal = sqrt(sumSquares);

    printf("\nTrace of the matrix = %d\n", trace);
    printf("Normal of the matrix = %.4f\n", normal);

    return 0;
}
