/*Program to calculate P(n/r) and C(n/r) using functions:*/

#include <stdio.h>

// Function to calculate factorial of a number
unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate permutation (P(n,r))
unsigned long long permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

// Function to calculate combination (C(n,r))
unsigned long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    // Input values of n and r from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    // Check if n is greater than or equal to r
    if (n >= r) {
        // Calculate and print permutation
        printf("Permutation P(%d, %d) = %llu\n", n, r, permutation(n, r));

        // Calculate and print combination
        printf("Combination C(%d, %d) = %llu\n", n, r, combination(n, r));
    } else {
        printf("Invalid input: n should be greater than or equal to r.\n");
    }

    return 0;
}
