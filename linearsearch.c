/* Write a program to search a given number from the 1-D array whether this number is present or not using
Linear Search Technique.*/

#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index if key is found
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int arr[] = {12, 34, 56, 78, 90, 23, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    // Input the number to search
    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Perform linear search
    int index = linearSearch(arr, size, key);

    // Check if the number is found or not
    if (index != -1) {
        printf("Number %d found at index %d.\n", key, index);
    } else {
        printf("Number %d not found in the array.\n", key);
    }

    return 0;
}
