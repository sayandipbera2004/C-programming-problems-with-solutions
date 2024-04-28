/*Write a c program  to reverse a number*/ 
#include <stdio.h>

int main() {
    int num, reversedNum = 0;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
