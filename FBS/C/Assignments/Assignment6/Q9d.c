#include <stdio.h>

int checkTriangle(int side1, int side2, int side3);   //function  declaration

void main()
{
    int side1, side2, side3, result;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    result = checkTriangle(side1, side2, side3);   // function call

    if(result == 1)
        printf("This is an Equilateral Triangle.");
    else if(result == 2)
        printf("This is an Isosceles Triangle.");
    else
        printf("This is a Scalene Triangle.");
}

int checkTriangle(int side1, int side2, int side3)   //function definition
{
    if(side1 == side2 && side2 == side3)
        return 1;
    else if(side1 == side2 || side2 == side3 || side1 == side3)
        return 2;
    else
        return 3;
}