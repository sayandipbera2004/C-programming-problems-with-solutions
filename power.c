/*Write a program to find the power of a given number.*/

#include <stdio.h>

// Function to calculate power of a number
double power(double base, int exponent) {
    double result = 1.0;

    // If exponent is positive
    if (exponent > 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    }
    // If exponent is negative
    else if (exponent < 0) {
        exponent = -exponent; // Change exponent to positive
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        result = 1.0 / result; // Invert the result
    }
    // If exponent is 0, result is 1

    return result;
}

int main() {
    double base;
    int exponent;

    // Input the base and exponent from the user
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate and print the result
    double result = power(base, exponent);
    printf("Result: %lf\n", result);

    return 0;
}
