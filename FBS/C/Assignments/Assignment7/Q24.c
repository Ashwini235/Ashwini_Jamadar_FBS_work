#include<stdio.h>

void sumFirstLast(int *num);   // function declaration

void main()
{
    int n = 12345;

    sumFirstLast(&n);   // function call
}

void sumFirstLast(int *num)   // function definition
{
    int n = *num;
    int first, last;

    last = n % 10;

    while(n >= 10)
    {
        n /= 10;
    }

    first = n;

    int sum = first + last;

    printf("Sum of first and last digit is %d", sum);
}