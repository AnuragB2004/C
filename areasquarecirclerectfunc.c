#include <stdio.h>
#include <stdlib.h>

void areasquare(float side);
void areacircle(float radius);
void arearectangle(float side1, float side2);

int main()
{
    int choice;
    float side, radius, side1, side2;

    printf("Choose the shape to calculate its area:\n");
    printf("1. Square\n");
    printf("2. Circle\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the side length of the square: ");
        scanf("%f", &side);
        areasquare(side);
        break;
    case 2:
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        areacircle(radius);
        break;
    case 3:
        printf("Enter the sides of the rectangle (separated by space): ");
        scanf("%f %f", &side1, &side2);
        arearectangle(side1, side2);
        break;
    default:
        printf("Invalid choice.\n");
        break;
    }

    return 0;
}

void areasquare(float side)
{
    float area = side * side;
    printf("Area of square: %f\n", area);
}

void areacircle(float radius)
{
    float areacircle = 3.14 * radius * radius;
    printf("Area of circle: %f\n", areacircle);
}

void arearectangle(float side1, float side2)
{
    float arearectangle = side1 * side2;
    printf("Area of rectangle: %f\n", arearectangle);
}