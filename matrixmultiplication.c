/* Write a program to multiply two 2-D matrixes and display the resultant matrix. Also mention the matrix multiplication conditions.*/

#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Function to multiply two matrices
void multiplyMatrices(int mat1[][MAX_COLS], int mat2[][MAX_COLS], int result[][MAX_COLS], int rows1, int cols1, int cols2) {
    int i, j, k;
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0; // Initialize each element of result matrix to 0
            for (k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[][MAX_COLS], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int rows1, cols1, rows2, cols2;

    // Input dimensions and elements of first matrix
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input dimensions and elements of second matrix
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    // Perform matrix multiplication
    multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);

    // Display the resultant matrix
    printf("Resultant matrix after multiplication:\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}
