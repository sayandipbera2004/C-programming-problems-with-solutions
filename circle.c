/*The length and breadth of a rectangle and radius 
of a circle are input through keyboard. Write a program 
to calculate the area and perimeter of the rectangle, 
and the area and the circumference of the circle.*/
#include <stdio.h>
#define PI 3.14159

int main() {
    float length, breadth, radius;
    float rectangle_area, rectangle_perimeter, circle_area, circle_circumference;

    // Input length and breadth of rectangle
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    // Input radius of circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Calculate area and perimeter of rectangle
    rectangle_area = length * breadth;
    rectangle_perimeter = 2 * (length + breadth);

    // Calculate area and circumference of circle
    circle_area = PI * radius * radius;
    circle_circumference = 2 * PI * radius;

    // Print results
    printf("\nRectangle:\n");
    printf("Area: %.2f\n", rectangle_area);
    printf("Perimeter: %.2f\n", rectangle_perimeter);

    printf("\nCircle:\n");
    printf("Area: %.2f\n", circle_area);
    printf("Circumference: %.2f\n", circle_circumference);

    return 0;
}
