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

int multMatrix(Matrix A, Matrix B) {
    if (A.cols != B.rows) {
        printf("Undesired Dimensions");
        return -1;
    }
    
    Matrix C;
    C.rows = A.rows;
    C.cols = B.cols;

    for (int i = 0; i < C.rows; i++) {
        for (int j = 0; j < C.cols; j++) {
            C.arr[i][j] = 0;
            for (int k = 0; k < A.cols; k++) {
                C.arr[i][j] += A.arr[i][k] * B.arr[k][j];
            }
        }
    }

    printMatrix(C);
    return 0;
}
