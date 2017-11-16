#include <stdio.h>


int main(void)
{
	// multiples of 3 or 5 numbers between 0 & 10
    int sum =0;

    for(int i = 1; i < 1000; i++)
    {
    	if(i % 3 == 0 || i % 5 == 0)
    	sum += i;
 
    }
        printf(" Sum of multiple of 3 or 5 below 1000 = %d \n",sum);

}



