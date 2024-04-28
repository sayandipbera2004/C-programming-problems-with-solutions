/*Write a program to insert one element into any position of the
 existing 1 -D array. Finally display the resultant array which 
 containing one extra element with previous all elements.*/
#include <stdio.h>

int main() {
    int array[100]; // Assuming array size is 100
    int size, position, newValue;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Input position to insert and the new value
    printf("Enter the position to insert the new element (0-indexed): ");
    scanf("%d", &position);
    printf("Enter the new value to insert: ");
    scanf("%d", &newValue);

    // Shift elements to the right to make space for the new element
    for (int i = size; i > position; i--) {
        array[i] = array[i - 1];
    }

    // Insert the new value at the specified position
    array[position] = newValue;

    // Increment the size of the array
    size++;

    // Print the resultant array
    printf("Resultant array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
