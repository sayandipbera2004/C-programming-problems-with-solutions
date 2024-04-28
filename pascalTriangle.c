/*Write a program which prints the pascal triangle.*/

#include <stdio.h>

// Function to calculate and print Pascal's triangle
void printPascalTriangle(int rows) {
    int coef = 1;

    for (int i = 0; i < rows; i++) {
        // Print spaces for alignment
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            // Calculate and print coefficients
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            printf("%d ", coef);
        }
        printf("\n");
    }
}

int main() {
    int rows;

    // Input the number of rows for Pascal's triangle
    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &rows);

    // Print Pascal's triangle
    printPascalTriangle(rows);

    return 0;
}
