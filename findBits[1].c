#include <stdio.h> 
#define SIZE 32 

/*
The program gets 2 integers, converts them to binaries and then checks 
how much 1 there is in both numbers
*/

/*
This method converts our numbers to binaries. 
*/

void numtobinary(unsigned long int num , int arr[])
{
	int i;
	int number = num ; 
	for ( i= SIZE-1 ; number != 0 ; i--)
	{
		arr[i] = number % 2; 
		number /= 2 ; 
	}
}

int main() 
{
	unsigned long int x, y ;
	int counter = 0 ; 
	int i ;
	
	
	printf("Hi , please enter two numbers:  \n") ;
	scanf( "%lu %lu" ,&x ,&y ) ;
	
	int x_binary[SIZE] = {0} ; 
	int y_binary[SIZE] = {0} ; 

	numtobinary(x, x_binary); 
	numtobinary(y, y_binary); 


	for(i = 0 ; i < SIZE ; i++) /* Checks how much 1 there is in the two 						binary numbers */
	{
		if(x_binary[i] && y_binary[i])
		{
			counter++ ; 
		}
	}
	printf ("counter = %d\n" , counter) ;


	return 0 ; 
}

