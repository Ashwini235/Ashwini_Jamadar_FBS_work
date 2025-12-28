#include <stdio.h>

int calculator();   // declaration

void main()
{
    int result;
    result = calculator();   // function call
    printf("Result = %d", result);
}

int calculator()   // definition
{
    int no1, no2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &no1);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &no2);

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