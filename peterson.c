/*Program to check whether the given number is Peterson
or not using while loop*/

#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to check if a number is a Peterson number
int isPeterson(int num) {
    int originalNum = num;
    int sum = 0;

    // Calculate the sum of factorials of digits
    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // Check if the sum equals the original number
    if (sum == originalNum)
        return 1; // Peterson number
    else
        return 0; // Not a Peterson number
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a Peterson number
    if (isPeterson(num))
        printf("%d is a Peterson number.\n", num);
    else
        printf("%d is not a Peterson number.\n", num);

    return 0;
}
