/*name:lalith
program:fractorial
date:1/07/19 */

#include<stdio.h> // its a preprocessive directive
int main()
{
	int input, result, i; // declaring the variables
	input=0; //initialising the variables
	result=1;
	i=0;
	printf("please enter input to calculate factorial: "); // giving the option  for the user to enter the input 
	scanf(" %d",&input); // the input is taken into the variable
	if(input==0) // using the if else condition
	{
		result=1; //since 0!=1 
	}
	else
	{
		for(i=input; i>0;i--) // using the for loop  for the given conditions
		{ 
			result=i*result; // if input=6 than 6*result, and so on
		}

	}
        printf("the factorial of the given input is %d\n" ,result); // printing the factorial output
		

}

