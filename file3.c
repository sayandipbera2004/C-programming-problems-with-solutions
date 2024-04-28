/*Write a program to open a binary file in read mode then write all 
information from that file after
reading into another binary file. Finally read all information 
from the 2nd binary file using read mode.*/

#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char buffer[1024]; // Buffer to store data read from the file
    size_t bytesRead; // To store the number of bytes read from the file

    // Open the source binary file in read mode
    sourceFile = fopen("source.bin", "rb");

    // Check if the source file exists and opened successfully
    if (sourceFile == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    // Open the destination binary file in write mode
    destinationFile = fopen("destination.bin", "wb");

    // Check if the destination file is opened successfully
    if (destinationFile == NULL) {
        printf("Unable to create destination file.\n");
        fclose(sourceFile); // Close the source file before exiting
        return 1;
    }

    // Read from source file and write to destination file
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    // Reopen the destination file in read mode to display its content
    destinationFile = fopen("destination.bin", "rb");

    // Check if the destination file is opened successfully
    if (destinationFile == NULL) {
        printf("Unable to open destination file.\n");
        return 1;
    }

    // Display the content of the destination file
    printf("Content of destination file:\n");
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), destinationFile)) > 0) {
        fwrite(buffer, 1, bytesRead, stdout); // Write to standard output
    }

    // Close the destination file
    fclose(destinationFile);

    return 0;
}
