/* Write a program which converts a character into its lowercase
 letter if it is in uppercase and to its uppercase letter if 
 it is lowercase letter.*/

#include <stdio.h>
int main() {
    char ch;

    // Input from the keyboard
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Checking if the character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        // Convert uppercase to lowercase
        ch = ch + 32;
    } 
    // Checking if the character is lowercase
    else if (ch >= 'a' && ch <= 'z') {
        // Convert lowercase to uppercase
        ch = ch - 32;
    }

    // Output
    printf("Converted character: %c\n", ch);

    return 0;
}
