#include<stdio.h>

void checkPerfect(int *num);   // function declaration

void main()
{
    int n = 28;

    checkPerfect(&n);   // function call
}

void checkPerfect(int *num)   // function definition
{
    int i = 1, sum = 0;

    while(i < *num)
    {
        if(*num % i == 0)
            sum += i;
        i++;
    }

    if(sum == *num)
        printf("Number is Perfect");
    else
        printf("Number is not Perfect");
}