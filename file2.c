/*Write a program to open a text file in write mode then write some information into that file. Finally count total number of characters and spaces*/
#include <stdio.h>

int main() {
    FILE *file;
    char text[] = "Hello, this is a sample text with spaces.";

    // Open the file in write mode
    file = fopen("textfile.txt", "w");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    // Write text into the file
    fputs(text, file);

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("textfile.txt", "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    int characterCount = 0;
    int spaceCount = 0;
    char ch;

    // Count characters and spaces
    while ((ch = fgetc(file)) != EOF) {
        characterCount++;
        if (ch == ' ') {
            spaceCount++;
        }
    }

    // Close the file
    fclose(file);

    // Display the counts
    printf("Total number of characters: %d\n", characterCount);
    printf("Total number of spaces: %d\n", spaceCount);

    return 0;
}
