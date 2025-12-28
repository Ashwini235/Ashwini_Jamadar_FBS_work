#include <stdio.h>

void calculator();   // declaration

void main()
{
    calculator();   // function call
}

void calculator()   // definition
{
    int no1, no2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &no1);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &no2);

    if(operator == '+')
        result = no1 + no2;
    else if(operator == '-')
        result = no1 - no2;
    else if(operator == '*')
        result = no1 * no2;
    else if(operator == '/')
        result = no1 / no2;
    else if(operator == '%')
        result = no1 % no2;

    printf("Result = %d", result);
}