/*Program to display all prime numbers within 
the range (which is given by the user) using while loop:*/

#include <stdio.h>

int main() {
    int start, end;

    // Input the range from the user
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Validate the range
    if (start >= end) {
        printf("Invalid range! The start of the range should be less than the end.\n");
        return 0;
    }

    // Display prime numbers within the range
    printf("Prime numbers between %d and %d are: ", start, end);

    while (start <= end) {
        int i = 2;
        int isPrime = 1; // Assume the number is prime initially

        // Check if the current number is prime
        while (i * i <= start) {
            if (start % i == 0) {
                isPrime = 0; // If the number is divisible by any other number, it's not prime
                break;
            }
            i++;
        }

        // Print the prime number
        if (isPrime && start > 1) {
            printf("%d ", start);
        }

        start++;
    }

    printf("\n");

    return 0;
}
