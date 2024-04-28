/*Write a program to check fibonacci series of a number*/
#include <stdio.h>

// Function to check if a number is a perfect square
int isPerfectSquare(int n) {
    int squareRoot = 1;
    while (squareRoot * squareRoot < n) {
        squareRoot++;
    }
    return (squareRoot * squareRoot == n);
}

// Function to check if a number is a Fibonacci number
int isFibonacci(int n) {
    // A number is Fibonacci if and only if one or both of (5 * n^2 + 4) or (5 * n^2 - 4) is a perfect square
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is a Fibonacci number
    if (isFibonacci(number)) {
        printf("%d is a Fibonacci number.\n", number);
    } else {
        printf("%d is not a Fibonacci number.\n", number);
    }

    return 0;
}
