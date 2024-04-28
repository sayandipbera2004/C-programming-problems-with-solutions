/* Write a C program to display the area of a circle using static 
function area( ) which will be called inside the display function 
dis( )*/
#include <stdio.h>

// Function prototype
void dis();
float area();

int main() {
    // Calling the display function
    dis();
    return 0;
}

// Display function
void dis() {
    // Static function for calculating the area of a circle
    float area() {
        float radius;
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        return 3.14 * radius * radius; // Area formula
    }
    // Calling the static area function and displaying the result
    printf("Area of the circle: %.2f\n", area());
}
