/*Calculate the sum of natural number using loop*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of natural numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Print the sum
    printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
