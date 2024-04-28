/*Write a program to display the entire array elements from starting index to last index and viceversa using pointer.
*/
#include <stdio.h>

int main() {
    int array[100]; // Assuming array size is 100
    int size, i;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int *ptr = array; // Pointer pointing to the first element of the array

    // Display array elements from starting index to last index using pointer
    printf("Array elements from starting index to last index:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Display array elements from last index to starting index using pointer
    printf("Array elements from last index to starting index:\n");
    for (i = size - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
