#include <stdio.h>
#include <stdlib.h>

// Function to create a matrix with given rows and columns
int** create_matrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)calloc(cols, sizeof(int)); // allocate and zero initialize
    }
    return matrix;
}

// Function to free allocated matrix
void free_matrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int row1, col1, row2, col2;

    // Input dimensions for matrix 1
    printf("Enter the number of rows for Matrix 1: ");
    scanf("%d", &row1);
    printf("Enter the number of columns for Matrix 1: ");
    scanf("%d", &col1);

    // Input dimensions for matrix 2
    printf("Enter the number of rows for Matrix 2: ");
    scanf("%d", &row2);
    printf("Enter the number of columns for Matrix 2: ");
    scanf("%d", &col2);

    // Check if multiplication is possible
    if (col1 != row2) {
        printf("Matrix multiplication not possible. Columns of Matrix 1 must equal rows of Matrix 2.\n");
        return 1;
    }

    // Create matrices dynamically
    int** Matrix1 = create_matrix(row1, col1);
    int** Matrix2 = create_matrix(row2, col2);
    int** Result  = create_matrix(row1, col2); // result is row1 x col2

    // Input Matrix 1
    printf("Enter elements of Matrix 1 (%d x %d):\n", row1, col1);
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &Matrix1[i][j]);
        }
    }

    // Input Matrix 2
    printf("Enter elements of Matrix 2 (%d x %d):\n", row2, col2);
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &Matrix2[i][j]);
        }
    }

    // Perform Matrix Multiplication
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                Result[i][j] += Matrix1[i][k] * Matrix2[k][j];
            }
        }
    }

    // Output the result
    printf("Resultant Matrix (%d x %d):\n", row1, col2);
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", Result[i][j]);
        }
        printf("\n");
    }

    // Free memory
    free_matrix(Matrix1, row1);
    free_matrix(Matrix2, row2);
    free_matrix(Result, row1);

    return 0;
}
