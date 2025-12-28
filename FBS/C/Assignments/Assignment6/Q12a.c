#include <stdio.h>

void calculatePrice();   // declaration

void main()
{
    calculatePrice();   // function call
}

void calculatePrice()   // definition
{
    int price;
    float final_price;
    char student;

    printf("Enter the price: ");
    scanf("%d", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if(student == 'y')
    {
        if(price > 500)
            final_price = price - (price * 0.20);
        else
            final_price = price - (price * 0.10);
    }
    else
    {
        if(price > 600)
            final_price = price - (price * 0.15);
        else
            final_price = price;
    }

    printf("Final price = %.2f", final_price);
}