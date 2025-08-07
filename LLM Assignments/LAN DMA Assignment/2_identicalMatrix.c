/*
WAP to check two matrix are identical or not.
Ex:
Two matrices are identical if their number of rows and columns are equal and the corresponding elements are also equal.
*/
#include <stdio.h>

int main() {
    int rows, cols, i, j, areIdentical = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols];

    printf("\nEnter elements of Matrix 1:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter elements of Matrix 2:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Compare both matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                areIdentical = 0;
                break;
            }
        }
        if (!areIdentical)
            break;
    }

    if (areIdentical)
        printf("\nThe matrices are IDENTICAL.\n");
    else
        printf("\nThe matrices are NOT identical.\n");

    return 0;
}
