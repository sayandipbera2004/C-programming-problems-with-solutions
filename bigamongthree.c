/*Program in C to find the biggest of three integers using
 a function:*/
 #include <stdio.h>

// Function to find the maximum of three integers
int findMax(int num1, int num2, int num3) {
    int max = num1; // Assume num1 is the largest initially

    // Check if num2 is greater than current max
    if (num2 > max) {
        max = num2;
    }

    // Check if num3 is greater than current max
    if (num3 > max) {
        max = num3;
    }

    return max;
}

int main() {
    int num1, num2, num3;

    // Input three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Call the function to find the maximum
    int largest = findMax(num1, num2, num3);

    // Display the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}
