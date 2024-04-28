/*7. If a three digits number is input through a keyboard then write a program
i)To calculate the sum of the last two digits.*/

#include <stdio.h>

int main() {
    int num, lastTwoDigits, sum;

    // Input a three-digit number from the user
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Extract the last two digits
    lastTwoDigits = num % 100;

    // Calculate the sum of the last two digits
    sum = (lastTwoDigits / 10) + (lastTwoDigits % 10);

    // Print the sum of the last two digits
    printf("Sum of the last two digits: %d\n", sum);

    return 0;
}
