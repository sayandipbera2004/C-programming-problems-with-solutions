/* Write a program to search a given number from the array
 whether this number is present or not using Linear Search 
 Technique with the help of pointer.*/
 #include <stdio.h>

// Function to perform linear search
int linearSearch(int *ptr, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (*(ptr + i) == key) {
            return i; // Return the index if key is found
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int array[100]; // Assuming array size is 100
    int size, key, position;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Input the number to search
    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Perform linear search
    position = linearSearch(array, size, key);

    // Check if the number is found or not
    if (position != -1) {
        printf("The number %d is found at index %d.\n", key, position);
    } else {
        printf("The number %d is not found in the array.\n", key);
    }

    return 0;
}

