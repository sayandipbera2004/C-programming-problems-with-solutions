/*Write a C function to remove all the repeated characters from a given string. :*/

#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[]) {
    int len = strlen(str);
    int index = 0;

    // Initialize an array to keep track of characters encountered
    int encountered[256] = {0};

    // Iterate through the string
    for (int i = 0; i < len; i++) {
        // If the character is encountered for the first time
        if (encountered[str[i]] == 0) {
            // Copy the character to the output string
            str[index++] = str[i];
            // Mark the character as encountered
            encountered[str[i]] = 1;
        }
    }

    // Add null terminator at the end of the output string
    str[index] = '\0';
}

int main() {
    char str[100];

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Remove duplicates from the string
    removeDuplicates(str);

    // Print the string without duplicates
    printf("String after removing duplicates: %s\n", str);

    return 0;
}
