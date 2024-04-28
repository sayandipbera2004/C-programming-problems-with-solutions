/*Write a program to calculate the sum of each row and column of a given 2-D matrix. Also
calculate the sum of main diagonal and other diagonal of this matrix.*/

#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Function to calculate the sum of each row and column of a matrix
void calculateRowColumnSum(int mat[][MAX_COLS], int rows, int cols) {
    int rowSum[MAX_ROWS] = {0};
    int colSum[MAX_COLS] = {0};
    int mainDiagonalSum = 0, otherDiagonalSum = 0;

    // Calculate row and column sums
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSum[i] += mat[i][j];
            colSum[j] += mat[i][j];
            if (i == j) {
                mainDiagonalSum += mat[i][j];
            }
            if (i + j == rows - 1) {
                otherDiagonalSum += mat[i][j];
            }
        }
    }

    // Display row sums
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    // Display column sums
    printf("\nSum of each column:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }

    // Display sum of main diagonal
    printf("\nSum of main diagonal: %d\n", mainDiagonalSum);

    // Display sum of other diagonal
    printf("Sum of other diagonal: %d\n", otherDiagonalSum);
}

int main() {
    int mat[MAX_ROWS][MAX_COLS];
    int rows, cols;

    // Input dimensions and elements of the matrix
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Calculate and display row, column, and diagonal sums
    calculateRowColumnSum(mat, rows, cols);

    return 0;
}
