/*Write a program to check whether a given string is palindrome or not. Also display the reverse of the given string.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, isPalindrome = 1;

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    len = strlen(str);

    // Print the reverse of the string
    printf("Reverse of the string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    // Check if the string is a palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    // Print the result
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
