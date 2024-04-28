/*Program to calculate the sum of any two integers or float numbers
 using 4 different user-defined functions:*/

 #include <stdio.h>

// Function to calculate the sum of two integers
int sumIntegers(int num1, int num2) {
    return num1 + num2;
}

// Function to calculate the sum of two float numbers
float sumFloats(float num1, float num2) {
    return num1 + num2;
}

// Function to input an integer from the user
int inputInteger() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    return num;
}

// Function to input a float number from the user
float inputFloat() {
    float num;
    printf("Enter a float number: ");
    scanf("%f", &num);
    return num;
}

int main() {
    int choice;
    int int1, int2;
    float float1, float2;

    // Display menu
    printf("1. Sum of two integers\n");
    printf("2. Sum of two float numbers\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Input two integers
            int1 = inputInteger();
            int2 = inputInteger();
            // Calculate and print the sum of integers
            printf("Sum of integers: %d\n", sumIntegers(int1, int2));
            break;
        case 2:
            // Input two float numbers
            float1 = inputFloat();
            float2 = inputFloat();
            // Calculate and print the sum of float numbers
            printf("Sum of float numbers: %.2f\n", sumFloats(float1, float2));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
