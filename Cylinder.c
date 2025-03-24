#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#define PI 3.141593
#define circumference(r) (2 * PI * r)

//  Function to determine the Surface Area of the Cylinder

int toCylinderArea (double circumference) {

    double cylinderHeight;
    double radius = circumference / (2 * PI);

    printf("Please input the height of the Cylinder:\n");
    scanf("%lf", &cylinderHeight);

    double surfaceArea = (cylinderHeight * circumference) + (circumference * radius);

    printf("The surface area of the Cylinder is: %.3lf", surfaceArea);

    return surfaceArea;
}

int main () {

    double circleRadius;

    char userBool[2];

    printf("Input the Radius of a Circle:\n");
    scanf("%lf", &circleRadius);

    double circumference = circumference(circleRadius);

    printf("The circumference of a circle with radius: %lf is: %.2lf\n", circleRadius, circumference);

    printf("Would you like to find the surface area of a Cylinder?\n");
    scanf("%s", &userBool);

    if(strcmp(userBool, "Y") == 0) {
        toCylinderArea(circumference);
    }
    else {
        return 0;
    }

    return 0;
}

