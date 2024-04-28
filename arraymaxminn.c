/*Write a C program which finds the maximum and minimum number from 
a given set of integer numbers taken in an array.*/
#include <stdio.h>

int main() {
    int numbers[100]; // Assuming array size is 100
    int size, i;
    int max, min;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initialize max and min with the first element of the array
    max = min = numbers[0];

    // Find maximum and minimum elements
    for (i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // Print the maximum and minimum numbers
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}
