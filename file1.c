/* Write a program to open a text file in read
mode then write all information from that file after reading into
another text file. Finally read all information from the 2nd
 text file using read mode*/
 #include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    // Open the source file in read mode
    sourceFile = fopen("source.txt", "r");

    // Check if the source file exists
    if (sourceFile == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen("destination.txt", "w");

    // Check if the destination file is opened successfully
    if (destinationFile == NULL) {
        printf("Unable to create destination file.\n");
        fclose(sourceFile); // Close the source file before exiting
        return 1;
    }

    // Read character by character from source file and write to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    // Reopen the destination file in read mode to display its content
    destinationFile = fopen("destination.txt", "r");

    // Check if the destination file is opened successfully
    if (destinationFile == NULL) {
        printf("Unable to open destination file.\n");
        return 1;
    }

    // Display the content of the destination file
    printf("Content of destination file:\n");
    while ((ch = fgetc(destinationFile)) != EOF) {
        printf("%c", ch);
    }

    // Close the destination file
    fclose(destinationFile);

    return 0;
}
