/*Write a program to determine whether a character is a digit or not. :*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is a digit using the isdigit() function
    if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is not a digit.\n", ch);
    }

    return 0;
}
