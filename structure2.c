/*If the person earning salary in between Rs. 1000 to Rs.3500 then 
add Rs.500 to the salary of that person. Finally 
display all the information using structure variable after 
modification. .*/

#include <stdio.h>
#include <string.h>

// Define a structure for employee
struct Employee {
    char Ename[50];
    int Ecode;
    float Esal;
    char Eph_no[15];
};

// Function to swap two employee structures
void swap(struct Employee *a, struct Employee *b) {
    struct Employee temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort based on salary
void bubbleSort(struct Employee arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].Esal > arr[j + 1].Esal) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    // Declare an array of structures to store information of 5 employees
    struct Employee employees[5];

    // Input information for 5 different employees
    for (int i = 0; i < 5; i++) {
        printf("Enter information for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].Ename);
        printf("Employee code: ");
        scanf("%d", &employees[i].Ecode);
        printf("Salary: ");
        scanf("%f", &employees[i].Esal);
        printf("Phone number: ");
        scanf("%s", employees[i].Eph_no);
        printf("\n");
    }

    // Add Rs. 500 to the salary of employees earning between Rs. 1000 and Rs. 3500
    for (int i = 0; i < 5; i++) {
        if (employees[i].Esal >= 1000 && employees[i].Esal <= 3500) {
            employees[i].Esal += 500;
        }
    }

    // Sort the information based on salary in ascending order
    bubbleSort(employees, 5);

    // Display information of all employees after modification and sorting
    printf("Information of all employees after adding Rs. 500 to salary of employees earning between Rs. 1000 and Rs. 3500:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].Ename);
        printf("Employee code: %d\n", employees[i].Ecode);
        printf("Salary: %.2f\n", employees[i].Esal);
        printf("Phone number: %s\n", employees[i].Eph_no);
        printf("\n");
    }

    return 0;
}
