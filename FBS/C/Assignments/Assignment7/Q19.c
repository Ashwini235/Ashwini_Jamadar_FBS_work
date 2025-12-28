#include<stdio.h>

void checkArmstrong(int *no);   // function declaration

void main()
{
    int num = 153;

    checkArmstrong(&num);   // function call
}

void checkArmstrong(int *no)   // function definition
{
    int n = *no;
    int rem, sum = 0;

    while(n > 0)
    {
        rem = n % 10;
        sum += (rem * rem * rem);
        n /= 10;
    }

    if(sum == *no)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");
}