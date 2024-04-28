/* Write a C program to find the G.C.D and L.C.M of any two integer numbers .*/
#include <stdio.h>

// Function to calculate GCD of two numbers using Euclid's algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate GCD and LCM
    int gcd_result = gcd(num1, num2);
    int lcm_result = lcm(num1, num2);

    // Display results
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd_result);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm_result);

    return 0;
}
