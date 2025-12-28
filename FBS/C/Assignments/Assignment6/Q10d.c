#include <stdio.h>

int findGreatest(int a, int b, int c);   // declaration

void main()
{
    int a = 10, b = 20, c = 15;
    int result;

    result = findGreatest(a, b, c);   // function call
    printf("%d is greater", result);
}

int findGreatest(int a, int b, int c)   // definition
{
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