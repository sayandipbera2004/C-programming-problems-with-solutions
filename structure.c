/*1. Write a program of a student structure which consists of 4 
members( Sname , Sroll, Saddress and Sph\_no). Using this structure 
take 4 different student information then display all the information
 using structure variable with the help of dot(.) and arrow(->)
 operators.*/

 #include <stdio.h>

// Define a structure for student
struct Student {
    char Sname[50];
    int Sroll;
    char Saddress[100];
    char Sph_no[15];
};

int main() {
    // Declare an array of structures to store information of 4 students
    struct Student students[4];

    // Input information for 4 different students
    for (int i = 0; i < 4; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].Sname);
        printf("Roll number: ");
        scanf("%d", &students[i].Sroll);
        printf("Address: ");
        scanf("%s", students[i].Saddress);
        printf("Phone number: ");
        scanf("%s", students[i].Sph_no);
        printf("\n");
    }

    // Display information for all the students
    printf("Information of all students:\n");
    for (int i = 0; i < 4; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].Sname);
        printf("Roll number: %d\n", students[i].Sroll);
        printf("Address: %s\n", students[i].Saddress);
        printf("Phone number: %s\n", students[i].Sph_no);
        printf("\n");
    }

    return 0;
}
