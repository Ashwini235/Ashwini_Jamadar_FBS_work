#include <stdio.h>

float calculatePrice();   // declaration

void main()
{
    float result;
    result = calculatePrice();   // function call
    printf("Final price = %.2f", result);
}

float calculatePrice()   // definition
{
    int price;
    char student;

    printf("Enter the price: ");
    scanf("%d", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

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