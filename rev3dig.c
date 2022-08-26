/*name:lalith
program:reversing 3 digit number and displaying error if any 4 digit or more digit nos are entered
date:8-7-19*/

#include<stdio.h>  // its a preprocessive directive
int main()
{
	int input=0, reverse=0,temp=0; //declaring and initialising the variables 
	printf("Enter the input: "); // user is given to enter the input
	scanf(" %d" ,&input); // user enters the input and it gets scanned
	printf("\n");
	
	while(input!=0) //giving a condition check since its a 3 digit
	{
		temp=input%10 ; //we get remainder
		reverse=temp+(reverse*10); 
		input=input/10 ;
	}
	
	if(reverse<1000) // using condition if only
	{
		printf("reverse of the given input is %d\n" , reverse); // displaying the result if the condition satisfies
	}
	else
	{
		printf("Error\n"); // if 3 digit no is not entered
	}

	return 0 ;
}

