#include "include/matAlg.h"

int main(){
    int m, n;
    Matrix A;
    printf("Enter the details of the first matrix.\n");
    printf("Dimention of the Matrix [row cols]: ");
    scanf("%d %d", &m, &n);
    A.cols=m;
    A.rows=n;
    readMatrix(&A);
    printMatrix(A);

    int x, y;
    Matrix B;
    printf("Enter the details of the second matrix.\n");
    printf("Dimention of the Matrix [row cols]: ");
    scanf("%d %d", &x, &y);
    B.cols=x;
    B.rows=y;
    readMatrix(&B);
    printMatrix(B);

    int choice;
    printf("Enter your choice for matrix operations.\n");
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        addMatrix(A, B);
        break;

    case 2:
        subMatrix(A, B);
        break;
    
    case 3:
        multMatrix(A, B);
        break;
    
    default:
        printf("Invalid Choice");
        break;
    }
}