/* A student's grade is calculated in a subject according to the 
following rules:
Number obtained Grade >=90 O >=80 and <90 E >=70 and <80 A >=60 
and <70 B >=50 and <60 C >=40 and <50 D <40 F(FAILED)
Write a program which accepts a student's number as input 
and then determine the grade of the students in that subject.*/

#include <stdio.h>

int main() {
    int score;

    // Input the student's score
    printf("Enter student's score: ");
    scanf("%d", &score);

    // Determine the grade based on the score
    char grade;
    if (score >= 90)
        grade = 'O';
    else if (score >= 80)
        grade = 'E';
    else if (score >= 70)
        grade = 'A';
    else if (score >= 60)
        grade = 'B';
    else if (score >= 50)
        grade = 'C';
    else if (score >= 40)
        grade = 'D';
    else
        grade = 'F';

    // Output the grade
    printf("Student's grade: %c\n", grade);

    return 0;
}
