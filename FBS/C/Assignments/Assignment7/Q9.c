#include<stdio.h>

void checkTriangle(int *a, int *b, int *c);   // function declaration

void main()
{
    int side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    checkTriangle(&side1, &side2, &side3);   // function call
}

void checkTriangle(int *a, int *b, int *c)   // function definition
{
    if(*a == *b && *b == *c)
    {
        printf("This is an Equilateral Triangle");
    }
    else if(*a == *b || *b == *c || *a == *c)
    {
        printf("This is an Isosceles Triangle");
    }
    else
    {
        printf("This is a Scalene Triangle");
    }
}