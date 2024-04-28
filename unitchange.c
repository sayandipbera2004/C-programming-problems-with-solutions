/*Temperatures of a city in Fahrenheit degree is input through 
a keyboard. Write a program to convert the temperature
into centigrade degrees.*/
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Input from the keyboard
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Conversion from Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Output
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
