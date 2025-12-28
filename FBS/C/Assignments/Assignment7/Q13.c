#include<stdio.h>

void checkDivisibility(int *n);   // function declaration

void main()
{
    int no = 7;

    checkDivisibility(&no);   // function call
}

void checkDivisibility(int *n)   // function definition
{
    if((*n % 3 == 0) && (*n % 5 == 0))
        printf("Number is divisible by both 3 and 5");
    else
    {
        if((*n % 3 == 0) && (*n % 5 != 0))
            printf("Divisible by 3 but not divisible by 5");
        else
        {
            if((*n % 3 != 0) && (*n % 5 == 0))
                printf("Divisible by 5 but not divisible by 3");
            else
                printf("Not divisible by 3 and 5");
        }
    }
}