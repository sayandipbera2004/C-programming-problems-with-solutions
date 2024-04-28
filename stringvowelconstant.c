/*Write a program to count total number of vowels , consonants 
and spaces from the given string.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, spaces = 0, i = 0;

    // Input a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through the string
    while (str[i] != '\0') {
        // Convert each character to lowercase
        char ch = tolower(str[i]);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check if the character is a consonant
        else if ((ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            consonants++;
        }
        // Check if the character is a space
        else if (ch == ' ') {
            spaces++;
        }
        i++;
    }

    // Print the counts
    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);
    printf("Total number of spaces: %d\n", spaces);

    return 0;
}
