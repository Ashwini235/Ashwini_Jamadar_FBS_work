#include <stdio.h>

int calculator(int no1, int no2, char operator);   // declaration

void main()
{
    int no1, no2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &no1);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &no2);

    result = calculator(no1, no2, operator);   // function call
    printf("Result = %d", result);
}

int calculator(int no1, int no2, char operator)   // definition
{
    if(operator == '+')
        return no1 + no2;
    else if(operator == '-')
        return no1 - no2;
    else if(operator == '*')
        return no1 * no2;
    else if(operator == '/')
        return no1 / no2;
    else
        return no1 % no2;
}