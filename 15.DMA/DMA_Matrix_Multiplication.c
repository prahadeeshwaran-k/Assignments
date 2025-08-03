
#include <stdio.h>
#include <stdlib.h>
//Create Matrix Function
int** create_matrix(int row, int column){
    int** Matrix =  (int**)malloc(row*sizeof(int*));
    for(int i = 0 ; i<row ;i++){
        Matrix[i] = (int*)calloc(column, sizeof(int));
    }
    return Matrix;
}

int main(){
    int row,column;
    printf("Enter the Row: ");
    scanf("%d",&row);
    printf("Enter the column: ");
    scanf("%d",&column);
    
    int **PtrMatrix1 = create_matrix(row,column);
    int **PtrMatrix2 = create_matrix(row,column);
    int **PtrMatrixR = create_matrix(row,column);
    
    //Input The Matrix - 1
    printf("Enter the Numbers For Matrix 1: \n");
    for(int i=0;i<row;i++){
        for (int j = 0; j < column; j++)
            scanf("%d",&PtrMatrix1[i][j]);
    }
    
    //Input The Matrix - 2
    printf("Enter the Numbers For Matrix 1: \n");
    for(int i=0;i<row;i++){
        for (int j = 0; j < column; j++)
            scanf("%d",&PtrMatrix2[i][j]);
    }

    //The Matrix Multiplication
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            for(int k=0;k<row;k++){
                PtrMatrixR[i][j] += PtrMatrix1[i][k] * PtrMatrix2[k][j];
            }
        }
    }
    
    //Print Matrix Final Result
    printf("The Matrix Multiplication Of %dx%d\n",row,column);
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                printf("%d ",PtrMatrixR[i][j]);
            }
            printf("\n");
    }

}