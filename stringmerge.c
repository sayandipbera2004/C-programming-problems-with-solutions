/* Write a program to merge 2nd string at the end of 1st string without using strcat() function.*/

#include <stdio.h>

void mergeStrings(char str1[], char str2[]) {
    int i = 0, j = 0;

    // Find the end of the first string
    while (str1[i] != '\0') {
        i++;
    }

    // Merge the second string at the end of the first string
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Add null terminator to the merged string
    str1[i] = '\0';
}

int main() {
    char str1[100], str2[100];

    // Input two strings from the user
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Merge the second string at the end of the first string
    mergeStrings(str1, str2);

    // Print the merged string
    printf("Merged string: %s\n", str1);

    return 0;
}
