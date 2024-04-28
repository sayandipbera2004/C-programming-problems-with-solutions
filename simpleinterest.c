/*Write a program to calculate simple interest*/

#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // Input principal amount, rate of interest, and time period from the user
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;

    // Print the result
    printf("Simple interest: %.2f\n", simple_interest);

    return 0;
}
