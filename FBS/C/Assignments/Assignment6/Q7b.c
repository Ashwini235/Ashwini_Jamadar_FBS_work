#include <stdio.h>

double calculateSalary();   // function declaration

void main()
{
    double ts;
    ts = calculateSalary();   // function call

    printf("ts is %lf", ts);
}

double calculateSalary()   // function definition
{
    double bs = 6000;
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