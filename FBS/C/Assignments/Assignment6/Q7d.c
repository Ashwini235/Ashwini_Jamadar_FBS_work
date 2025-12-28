#include <stdio.h>

double calculateSalary(double bs);   // function declaration

void main()
{
    double bs = 6000;
    double ts;

    ts = calculateSalary(bs);   // function call
    printf("ts is %lf", ts);
}

double calculateSalary(double bs)   // function definition
{
    double da, ta, hra, ts;

    if(bs < 5000)
    {
        da = bs * 0.10;
        ta = bs * 0.15;
        hra = bs * 0.20;
    }
    else
    {
        da = bs * 0.15;
        ta = bs * 0.25;
        hra = bs * 0.30;
    }

    ts = bs + da + ta + hra;
    return ts;
}