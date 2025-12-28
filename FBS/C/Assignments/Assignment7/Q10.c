#include<stdio.h>

void findGreatest(int *x, int *y, int *z);   // function declaration

void main()
{
    int a = 10, b = 20, c = 15;

    findGreatest(&a, &b, &c);   // function call
}

void findGreatest(int *x, int *y, int *z)   // function definition
{
    if(*x > *y)
    {
        if(*x > *z)
            printf("%d is greater", *x);
        else
            printf("%d is greater", *z);
    }
    else
    {
        if(*y > *z)
            printf("%d is greater", *y);
        else
            printf("%d is greater", *z);
    }
}