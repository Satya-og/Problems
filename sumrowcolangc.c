#include <stdio.h>
int calculateSums(int mat[][10], int rows, int cols, int rowSum[], int colSum[]);
int  printMatrix(int mat[][10], int rows, int cols);
int main() 
{
    int mat[10][10], rowSum[10], colSum[10];
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    calculateSums(mat, rows, cols, rowSum, colSum);
    printf("\nThe matrix is:\n");
    printMatrix(mat, rows, cols);
    printf("\nRow sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i + 1, rowSum[i]);
    }
    printf("\nColumn sums:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d sum: %d\n", j + 1, colSum[j]);
    }
}

int calculateSums(int mat[][10], int rows, int cols, int rowSum[], int colSum[]) {
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
    }
    for (int j = 0; j < cols; j++) {
        colSum[j] = 0;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSum[i] += mat[i][j]; 
            colSum[j] += mat[i][j];
        }
    }
}
int printMatrix(int mat[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

