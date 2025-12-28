#include <stdio.h>

void checkTriangle();   // function declaration

void main()
{
    checkTriangle();   // function call
}

void checkTriangle()   // function definition
{
    int side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if(side1 == side2 && side2 == side3)
        printf("This is an Equilateral Triangle.");
    else if(side1 == side2 || side2 == side3 || side1 == side3)
        printf("This is an Isosceles Triangle.");
    else
        printf("This is a Scalene Triangle.");
}