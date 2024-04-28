/* Write a program to copy a string into another string without using strepy() function.*/

#include <stdio.h>

void copyString(char source[], char destination[]) {
    int i = 0;

    // Copy each character from source to destination
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    // Add null terminator to the destination string
    destination[i] = '\0';
}

int main() {
    char source[100], destination[100];

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", source);

    // Copy the string using custom function
    copyString(source, destination);

    // Print the copied string
    printf("Original string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}
