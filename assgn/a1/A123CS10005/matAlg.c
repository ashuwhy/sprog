#include "include/matAlg.h"

int addMatrix(Matrix A, Matrix B){
    if (A.cols!=B.cols || A.rows!=B.rows){
        printf("Unmached Dimentions");
        return(-1);
    }
    
    Matrix C;
    C.cols=A.cols;
    C.rows=A.rows;
    for (int i=0; i < A.rows; i++){
        for (int j=0; j < A.cols; j++){
            C.arr[i][j]=A.arr[i][j] + B.arr[i][j];
        }
    }

    printMatrix(C);
    return (0);
}

int subMatrix(Matrix A, Matrix B){
    if (A.cols!=B.cols || A.rows!=B.rows){
        printf("Unmached Dimentions");
        return(-1);
    }
    
    Matrix C;
    C.cols=A.cols;
    C.rows=A.rows;
    for (int i=0; i < A.rows; i++){
        for (int j=0; j < A.cols; j++){
            C.arr[i][j]=A.arr[i][j] - B.arr[i][j];
        }
    }

    printMatrix(C);
    return (0);
}

int multMatrix(Matrix A, Matrix B){
    if (A.cols!=B.rows){
        printf("Undesired Dimentions");
        return(-1);
    }
    
    Matrix C;
    C.cols=A.cols;
    C.rows=A.rows;
    for (int i=0; i < A.rows; i++){
        for (int j=0; j < A.cols; j++){
            C.arr[i][j]=A.arr[i][j] * B.arr[i][j];
        }
    }

    printMatrix(C);
    return (0);
}