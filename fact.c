/*Write a C program to find the factorial of a given number 
using for loop.*/
#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1; // Using unsigned long long to handle larger factorials

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate factorial using a for loop
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    // Display the factorial of the number
    printf("Factorial of %d = %llu\n", number, factorial);

    return 0;
}
