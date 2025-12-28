#include <stdio.h>

void findGreatest(int a, int b, int c);   // declaration

void main()
{
    int a = 10, b = 20, c = 15;
    findGreatest(a, b, c);   // function call
}

void findGreatest(int a, int b, int c)   // definition
{
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