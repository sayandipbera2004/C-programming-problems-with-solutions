/* Write a C program to take two integer numbers for addition,subtraction,multiplication & type casting division and display them on the screen.*/
#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integer numbers
    printf("Enter first integer number: ");
    scanf("%d", &num1);
    printf("Enter second integer number: ");
    scanf("%d", &num2);

    // Perform addition
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);

    // Perform subtraction
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);

    // Perform multiplication
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

    // Perform type casting division (assuming num2 is not 0)
    printf("Type casting division: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);

    return 0;
}
