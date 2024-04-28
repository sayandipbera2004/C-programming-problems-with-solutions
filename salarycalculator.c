/* Mr. Sayan Ghosh is an employee of an Engg. College. His Basic 
is Rs. 8825/ -. Now the dearness allowance is 
40% of his basic salary and house rent allowance is 20% of basic 
salary. Write a program to calculate his gross salary.
[Though his basic salary is 8825/- Do this program where basic 
is taken through keyboard].*/
#include <stdio.h>

int main() {
    float basic_salary, gross_salary, da, hra;

    // Input basic salary
    printf("Enter Mr. Sayan Ghosh's basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate Dearness Allowance (DA) and House Rent Allowance (HRA)
    da = 0.4 * basic_salary;
    hra = 0.2 * basic_salary;

    // Calculate gross salary
    gross_salary = basic_salary + da + hra;

    // Print gross salary
    printf("Mr. Sayan Ghosh's gross salary is: Rs. %.2f\n", gross_salary);

    return 0;
}

