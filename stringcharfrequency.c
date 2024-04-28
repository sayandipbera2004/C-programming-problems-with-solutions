/*Write a C program to find the frequency of each character of a given string.
*/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int freq[256] = {0}; // Initialize frequency array with zeros

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    // Calculate frequency of each character
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != '\n') {
            freq[(int)str[i]]++;
        }
    }

    // Display frequency of each character
    printf("Frequency of each character in the string:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("'%c' occurs %d times.\n", (char)i, freq[i]);
        }
    }

    return 0;
}
