/*name:lalith
program:fractorial
date:1/07/19 */

#include<stdio.h> // its a preprocessive directive
int main()
{
	int input, result; // declaring the variables
	input=0; //initialising the variables
	result=0;
	printf("please enter the input:%d\n" , input); // giving the option  for the user to enter the input 
	scanf(" input=%d" , &input); // the input is taken into the variable
	if(input=0) // using the if else condition
	{
		result=1; //since 0!=1 
	}
	else
	{
		for(input>0,input>=1) // usiing the for loop  for the given conditions
		{ 
			result=input*result; // if input=6 than 6*result, and so on
			input--; // using input-- gives 5*result

		}

	}
	printf("the factorial for the given input %d=%d" , input, result);  
		

}

