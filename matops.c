#include "include/matAlg.h"
#include <stdio.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    int m, n;
    Matrix A;
    printf("Enter details of the first matrix.\n");
    printf("Dimensions [rows cols]: ");
    if (scanf("%d %d", &m, &n) != 2) {  // Check if input is valid
        printf("Invalid dimensions.\n");
        clearInputBuffer();
        return 1;
    }
    clearInputBuffer();  // Clear after dimensions
    A.rows = m;  
    A.cols = n;
    readMatrix(&A);
    clearInputBuffer();  // Clear after matrix A input
    printMatrix(A);

    int x, y;
    Matrix B;
    printf("\nEnter details of the second matrix.\n");
    printf("Dimensions [rows cols]: ");
    if (scanf("%d %d", &x, &y) != 2) {  // Validate input
        printf("Invalid dimensions.\n");
        clearInputBuffer();
        return 1;
    }
    clearInputBuffer();  // Clear after dimensions
    B.rows = x;  
    B.cols = y;
    readMatrix(&B);
    clearInputBuffer();  // Clear after matrix B input
    printMatrix(B);

    int choice;
    while (1) { 
        printf("\nChoose operation:\n");
        printf("1. Add | 2. Subtract | 3. Multiply | 4. Quit\n");
        if (scanf("%d", &choice) != 1) {  // Check if input is valid
            printf("Invalid input. Enter a number.\n");
            clearInputBuffer();
            continue;  // Skip to next loop iteration
        }
        clearInputBuffer();  // Clear after choice input

        switch (choice) {
            case 1:
                addMatrix(A, B);
                break;
            case 2:
                subMatrix(A, B);
                break;
            case 3:
                multMatrix(A, B);
                break;
            case 4:
                printf("Exiting...\n");
                return 0; 
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
}
