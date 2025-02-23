#include "include/matIO.h"

void readMatrix(Matrix* mat){
    printf("Enter the Matrix: \n");
    for (int i = 0; i < mat->rows; i++)
    {
        for (int j = 0; j < mat->cols; j++)
        {
            scanf("%d", &(mat->arr[i][j]));
        }
        
    }
    
}

void printMatrix(Matrix mat){
    for (int i = 0; i < mat.rows; i++)
    {
        for (int j = 0; j < mat.cols; j++)
        {
            printf("%d ", mat.arr[i][j]);
        }
        printf("\n");
    }
}