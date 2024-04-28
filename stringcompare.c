/*Write a program to compare the two strings without using strcmp() function.
*/

#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Iterate through both strings
    while (str1[i] != '\0' || str2[i] != '\0') {
        // If characters are not equal, return the difference
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }

    // If both strings are equal
    return 0;
}

int main() {
    char str1[100], str2[100];

    // Input two strings from the user
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare the strings
    int result = compareStrings(str1, str2);

    // Print the result
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically smaller than the second string.\n");
    } else {
        printf("The first string is lexicographically greater than the second string.\n");
    }

    return 0;
}
