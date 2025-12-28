#include<stdio.h>

void calculatePrice(int *price, char *student);   // function declaration

void main()
{
    int price;
    char student;

    printf("Enter the price: ");
    scanf("%d", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);   

    calculatePrice(&price, &student);   // function call
}

void calculatePrice(int *price, char *student)   //  function definition
{
    float final_price;

    if(*student == 'y')
    {
        if(*price > 500)
            final_price = *price - (*price * 0.20);
        else
            final_price = *price - (*price * 0.10);
    }
    else if(*student == 'n')
    {
        if(*price > 600)
            final_price = *price - (*price * 0.15);
        else
            final_price = *price;
    }
    else
    {
        printf("Invalid choice");
        return;
    }

    printf("Final price = %.2f", final_price);
}