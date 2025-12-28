#include<stdio.h>

void calculator(int *a, int *b, char *op);   // function declaration

void main()
{
    int no1, no2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &no1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);   

    printf("Enter second number: ");
    scanf("%d", &no2);

    calculator(&no1, &no2, &operator);   // function call
}

void calculator(int *a, int *b, char *op)   // function definition
{
    int result;

    if(*op == '+')
    {
        result = *a + *b;
        printf("Result = %d", result);
    }
    else if(*op == '-')
    {
        result = *a - *b;
        printf("Result = %d", result);
    }
    else if(op == '*')
    {
        result = (*a) * (*b);
        printf("Result = %d", result);
    }
    else if(*op == '/')
    {
        result = (*a) / (*b);
        printf("Result = %d", result);
    }
    else if(*op == '%')
    {
        result = (*a) % (*b);
        printf("Result = %d", result);
    }
    else
    {
        printf("Invalid operator");
    }
}