#include <stdio.h>

int main(void)
{
	/*
		1,2,3,5,8,13
		Current value = prev1 + prev2
		prev1 = prev2
		prev2 = curr


	*/

		/*

		//Using while loop

		int prev1=1 ,prev2 = 2,curr = 0;
		int sum = 0;

		while(curr <= 4000000)
		{
			curr = prev1 + prev2;

			if(curr % 2 == 0)
				sum +=curr;

			prev1 = prev2;
			prev2 = curr;
		}
		printf("%d\n",sum);
	*/

        //using forloop

		int prev1 = 1,prev2 = 2;
		int sum = 0;

		for(int curr = 0; curr <=4000000;curr++)
		{
			curr = prev1+prev2;
			if(curr % 2 == 0)
				sum+=curr;
			prev1 = prev2;
			prev2 = curr;
		}
		printf("Sum of fibonacci numbers between 1 and 4000000 is: %d\n",sum);

}