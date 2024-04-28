/*Write a program to take co-ordinates of two 
points then display the distance between these
 two points using sqrt() and pow() function*/
#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    float distance;

    // Input coordinates of the first point
    printf("Enter coordinates of the first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    // Input coordinates of the second point
    printf("Enter coordinates of the second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calculate distance using the distance formula: sqrt((x2-x1)^2 + (y2-y1)^2)
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Display the distance between the two points
    printf("Distance between the two points: %.2f\n", distance);

    return 0;
}
