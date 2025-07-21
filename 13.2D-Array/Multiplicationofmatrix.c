//date:21/7/2025-mon
//chapter:2D-Array
//Title: Matrix Addition
//Description: This program adds two matrices.

/*
Matrix Multiplication Example:

MatrixA (3x3)    MatrixB (3x3)      Result C = A × B

| 1 2 3 |         | 9 8 7 |         | (1*9 + 2*9 + 3*9)   (1*8 + 2*8 + 3*8)   (1*7 + 2*7 + 3*7) |
| 4 5 6 |    ×    | 9 8 7 |     =   | (4*9 + 5*9 + 6*9)   (4*8 + 5*8 + 6*8)   (4*7 + 5*7 + 6*7) |
| 7 8 9 |         | 9 8 7 |         | (7*9 + 8*9 + 9*9)   (7*8 + 8*8 + 9*8)   (7*7 + 8*7 + 9*7) |

Which results in:

| 54   48  42  |
| 126 111  96  |
| 198 174 150  |
*/

#include<stdio.h>
//void printmatrix(int matrix[3][3], int row, int column); //! this will not working
void printmatrix(int row, int column, int matrix[row][column]); 
int main(){
    int matrix1[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[3][3] ={{9,8,7},{9,8,7},{9,8,7}};
    int matrixR[3][3] ={0};
    
    int row = sizeof (matrix1) / sizeof(matrix1[0]);
    int column = sizeof(matrix1[0]) / sizeof(matrix1[0][0]);
    int n = row*column;
    /*explanation 
    //Row
    sizeof(matrix1)    = 3 rows * 3 columns * 4 bytes/integer = 36 bytes
    sizeof(matrix1[0]) = 3 columns * 4 bytes/integer = 12 bytes
    row = sizeof(matrix1) / sizeof(matrix1[0]) = 36 bytes / 12 bytes = 3;

    //Column
    sizeof(matrix1[0][0]) = 4bytes
    column = sizeof(matrix1[0]) / sizeof(matrix1[0][0]) = 12 bytes / 4 bytes = 3;

    */
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            for(int k = 0 ; k< row;k++){
                matrixR[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            
        }
    }

    printmatrix(row, column,matrixR);
    return 0;


}

void printmatrix(int row, int column, int matrix[row][column]){
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}