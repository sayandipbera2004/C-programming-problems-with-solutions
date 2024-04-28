/*Write a c program to find maximum no among three numbers*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume num1 is the maximum initially
    int max = num1;

    // Compare num2 and num3 with max
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    // Print the maximum number
    printf("Maximum number among %d, %d, and %d is: %d\n", num1, num2, num3, max);

    return 0;
}
