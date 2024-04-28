/* Write a program to display all the 1-D array elements from 
starting index to last index and vice versa. Array length & 
elements will be supplied by the user.*/
#include <stdio.h>

int main() {
    int arr[100], size, i;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the array elements from starting index to last index
    printf("Array elements from starting index to last index:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Display the array elements from last index to starting index
    printf("Array elements from last index to starting index:\n");
    for (i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
