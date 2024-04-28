/*Write a program to add two square matrixes and
display the resultant matrix using pointer.
*/
#include <stdio.h>

#define MAX_SIZE 10

void addMatrices(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int size) {
    int i, j;

    // Adding corresponding elements of the matrices
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            *(*(result + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
}

void displayMatrix(int mat[][MAX_SIZE], int size) {
    int i, j;

    // Displaying the matrix
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

int main() {
    int size, i, j;

    // Input size of the square matrices
    printf("Enter the size of the square matrices: ");
    scanf("%d", &size);

    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    // Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding matrices
    addMatrices(matrix1, matrix2, result, size);

    // Displaying the resultant matrix
    printf("Resultant matrix after addition:\n");
    displayMatrix(result, size);

    return 0;
}
