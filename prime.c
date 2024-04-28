/*Write a program to check whether a given number is prime or 
not using for loop. Solve this using simple c programming with
out function*/
#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1; // Assume the number is prime initially

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num < 2) {
        isPrime = 0; // Numbers less than 2 are not prime
    } else {
        // Check for factors from 2 to sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // If the number is divisible by any other number, it's not prime
                break;
            }
        }
    }

    // Print the result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
