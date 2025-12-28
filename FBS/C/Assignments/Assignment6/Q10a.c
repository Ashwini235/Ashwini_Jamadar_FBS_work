#include <stdio.h>

void findGreatest();   // function declaration

void main()
{
    findGreatest();   // function call
}

void findGreatest()   // function definition
{
    int a = 10, b = 20, c = 15;

    if(a > b)
    {
        if(a > c)
            printf("%d is greater", a);
        else
            printf("%d is greater", c);
    }
    else
    {
        if(b > c)
            printf("%d is greater", b);
        else
            printf("%d is greater", c);
    }
}