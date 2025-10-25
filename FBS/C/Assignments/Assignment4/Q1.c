#include <stdio.h>

void  main()
 {
    int n = 500;  
    int num = 1; 

    while (num <= n)
	 {
        int sum = 0;
        int temp = num;
        int digits = 0;

        while (temp > 0)
	    {
            temp /= 10;
            digits++;
        }

        temp = num;

        
        while (temp > 0) 
		{
            int rem = temp % 10;
            int power = 1;
            int i = 0;

            while (i < digits)
		    {   
                power *= rem;
                i++;
            }

            sum += power;
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);

        num++;
    }

}

