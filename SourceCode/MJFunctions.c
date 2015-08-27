#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseIntegers()
{
	int number, rev;
    printf("Enter the number you want to reverse\n"); //Ask user for input
    scanf("%d",&number);							  //keyboard input
    if(number <= 0)
    	printf("Please enter positive integers");     //Check to make sure user don't enter 
   
    else											//negative numbers or alphabets
    {
       while(number > 0)          
    {
    	  rev = number % 10;         
    	  printf("%d\t",rev);
    	  number /= 10;  
    }
   
   		 printf("\n");
}


int main(void){

/*
number = 234
 rev = 4    number % 10
 number = 23    number / 10
 rev = 3      number % 10
 number = 2   number / 10
 rev = 2


*/

	reverseIntegers();
	perfectNumbers();
   

	

 
 

}

