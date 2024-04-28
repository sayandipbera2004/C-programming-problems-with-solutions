/*7. If a three digits number is input through a keyboard then write a program
i)To calculate the sum of digits.*/

#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Input a three-digit number from the user
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Extract digits and calculate the sum
    digit = num % 10; // Extract units digit
    sum += digit;
    num /= 10; // Remove units digit

    digit = num % 10; // Extract tens digit
    sum += digit;
    num /= 10; // Remove tens digit

    digit = num % 10; // Extract hundreds digit
    sum += digit;

    // Print the sum of digits
    printf("Sum of digits: %d\n", sum);

    return 0;
}
