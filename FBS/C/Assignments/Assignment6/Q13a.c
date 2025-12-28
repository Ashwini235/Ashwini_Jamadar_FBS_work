#include <stdio.h>

void checkDivisibility();   // declaration

void main()
{
    checkDivisibility();   // function call
}

void checkDivisibility()   // definition
{
    int no = 7;

    if(no % 3 == 0 && no % 5 == 0)
        printf("Number is divisible by both 3 and 5");
    else if(no % 3 == 0)
        printf("Divisible by 3 but not divisible by 5");
    else if(no % 5 == 0)
        printf("Divisible by 5 but not divisible by 3");
    else
        printf("Not divisible by 3 and 5");
}