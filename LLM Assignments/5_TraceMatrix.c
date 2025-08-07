/*
 WAP to find trace of matrix.
     Ex: 
     Trace of the matrix is the sum of the elements of the main diagonal i.e the diagonal from the 	upper left to the lower right of a matrix*/
#include <stdio.h>

int main() {
    int n, i, j, trace = 0;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate trace (sum of main diagonal)
    for (i = 0; i < n; i++) {
        trace += matrix[i][i];
    }

    // Display matrix
    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nTrace of the matrix = %d\n", trace);

    return 0;
}
