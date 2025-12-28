#include <stdio.h>

int findGreatest();   // function declaration

void main()
{
    int result;
    result = findGreatest();   // function call

    printf("%d is greater", result);
}

int findGreatest()   // function definition
{
    int a = 10, b = 20, c = 15;

    if(a > b)
    {
        if(a > c)
            return a;
        else
            return c;
    }
    else
    {
        if(b > c)
            return b;
        else
            return c;
    }
}