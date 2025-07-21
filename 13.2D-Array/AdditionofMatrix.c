//date:21/7/2025-mon
//chapter:2D-Array
//Title: Matrix Addition
//Description: This program adds two matrices.
#include<stdio.h>
//void printmatrix(int matrix[3][3], int row, int column); //! this will not working
void printmatrix(int row, int column, int matrix[row][column]); 
int main(){
    int matrix1[3][3] ={{10,10,10},{20,20,20},{30,30,30}};
    int matrix2[3][3] ={{11,12,13},{14,15,16},{17,18,19}};
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
            matrixR[i][j] = matrix1[i][j] + matrix2[i][j];
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