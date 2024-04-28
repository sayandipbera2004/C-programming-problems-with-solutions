/*Write a C program to find the G.C.D and L.C.M of any 
two integer numbers using for loop, while loop, do-while loop.*/
#include <stdio.h>

// Function to calculate GCD of two numbers using Euclid's algorithm
int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
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

    // Using for loop to find GCD
    int i, gcd_result;
    for (i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd_result = i;
        }
    }
    printf("GCD using for loop: %d\n", gcd_result);

    // Using while loop to find GCD
    int a = num1, b = num2, temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD using while loop: %d\n", a);

    // Using do-while loop to find GCD
    a = num1, b = num2;
    do {
        temp = b;
        b = a % b;
        a = temp;
    } while (b != 0);
    printf("GCD using do-while loop: %d\n", a);

    // Calculate LCM
    int lcm_result = lcm(num1, num2);
    printf("LCM: %d\n", lcm_result);

    return 0;
}
