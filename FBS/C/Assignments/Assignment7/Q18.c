#include<stdio.h>

void checkPrime(int *no);   // function declaration

void main()
{
    int num = 7;

    checkPrime(&num);   // function call
}

void checkPrime(int *no)   // function definition
{
    int i = 2, flag = 0;

    while(i <= (*no) / 2)
    {
        if(*no % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0)
        printf("Number is prime");
    else
        printf("Number is not prime");
}