#include <stdio.h> 

void main()
 {
    int side1, side2, side3; 

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3); 

    if (side1 == side2 && side2 == side3) 
	{
        printf("This is an Equilateral Triangle.\n");
    }

    else if (side1 == side2 || side2 == side3 || side1 == side3)
	{
        printf("This is an Isosceles Triangle.\n");
    }

    else
    {
        printf("This is a Scalene Triangle.\n");
    }

}