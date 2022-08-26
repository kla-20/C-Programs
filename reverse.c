/*name:lalith
program:reversing the user given number
date:3/7/19 */

#include<stdio.h> //its a preprocessive directive
int main()
{
	int input=0 , reverse=0 , temp=0 ; //declaring the variables
	printf("Enter the input value: "); // printing the statement for the user 
	scanf(" %d" , &input); // scanning the input given by the user 
	printf("\n");
	
	while(input!=0) //while loop for reverse
	{
		temp=input%10; 
		reverse=temp+reverse*10;
		input=input/10;
	}

	printf("The reverse of the given input=%d\n" ,reverse); // printing the final reversed output
	printf("\n");
	return 0;

}


