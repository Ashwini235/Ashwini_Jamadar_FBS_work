#include <stdio.h>

float calculatePrice(int price, char student);   // declaration

void main()
{
    int price;
    char student;
    float result;

    printf("Enter the price: ");
    scanf("%d", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    result = calculatePrice(price, student);   // function call
    printf("Final price = %.2f", result);
}

float calculatePrice(int price, char student)   // definition
{
    if(student == 'y')
    {
        if(price > 500)
            return price - (price * 0.20);
        else
            return price - (price * 0.10);
    }
    else
    {
        if(price > 600)
            return price - (price * 0.15);
        else
            return price;
    }
}