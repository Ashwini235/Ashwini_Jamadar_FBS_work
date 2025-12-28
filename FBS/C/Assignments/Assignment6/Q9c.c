#include <stdio.h>

void checkTriangle(int side1, int side2, int side3);   // declaration

void main()
{
    int side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    checkTriangle(side1, side2, side3);   // function call
}

void checkTriangle(int side1, int side2, int side3)   // definition
{
    if(side1 == side2 && side2 == side3)
        printf("This is an Equilateral Triangle.");
    else if(side1 == side2 || side2 == side3 || side1 == side3)
        printf("This is an Isosceles Triangle.");
    else
        printf("This is a Scalene Triangle.");
}