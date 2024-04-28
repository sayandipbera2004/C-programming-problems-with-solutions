/*Write a program to add 1 with each array element using pointer then display all the array elements with the help of pointer.*/
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

    // Add 1 to each array element using pointer
    for (i = 0; i < size; i++) {
        *(ptr + i) += 1;
    }

    // Display all the array elements using pointer
    printf("Array elements after adding 1 to each element:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
