#include <stdio.h>

void calculator(int no1, int no2, char operator);   //function  declaration

void main()
{
    int no1, no2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &no1);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &no2);

    calculator(no1, no2, operator);   // function call
}

void calculator(int no1, int no2, char operator)   //function definition
{
    int result;

    if(operator == '+')
        result = no1 + no2;
    else if(operator == '-')
        result = no1 - no2;
    else if(operator == '*')
        result = no1 * no2;
    else if(operator == '/')
        result = no1 / no2;
    else
        result = no1 % no2;

    printf("Result = %d", result);
}