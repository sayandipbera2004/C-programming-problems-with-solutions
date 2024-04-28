/*. Write a program of a person structure which consists of 4 members 
(Pname , Pcode, Paddress and Psal). Using this structure take 5 
different person information.*/

#include <stdio.h>

// Define a structure for a person
struct Person {
    char Pname[50];
    int Pcode;
    char Paddress[100];
    float Psal;
};

int main() {
    // Declare an array of structures to store information of 5 persons
    struct Person persons[5];

    // Input information for 5 different persons
    for (int i = 0; i < 5; i++) {
        printf("Enter information for person %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", persons[i].Pname);
        printf("Code: ");
        scanf("%d", &persons[i].Pcode);
        printf("Address: ");
        scanf("%s", persons[i].Paddress);
        printf("Salary: ");
        scanf("%f", &persons[i].Psal);
        printf("\n");
    }

    // Display information of all persons
    printf("Information of all persons:\n");
    for (int i = 0; i < 5; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: %s\n", persons[i].Pname);
        printf("Code: %d\n", persons[i].Pcode);
        printf("Address: %s\n", persons[i].Paddress);
        printf("Salary: %.2f\n", persons[i].Psal);
        printf("\n");
    }

    return 0;
}
