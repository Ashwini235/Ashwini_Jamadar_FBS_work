#include <stdio.h>

void main()
 {
    int n = 500;   
    int num = 1;   

    while (num <= n) 
	{
        int sum = 0;
        int temp = num;

    
        while (temp > 0) 
		{
            int rem = temp % 10;

        
            int fact = 1;
            int i = 1;
            while (i <= rem)
			 {
                fact *= i;
                i++;
            }

            sum += fact;
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);

        num++;
    }


    
}

