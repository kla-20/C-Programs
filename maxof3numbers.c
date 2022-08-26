/*name:lalith
program:max of 3 numbers using if statement
date:26/06/19 */

#include<stdio.h> //its a preprocessive directive
int main()
{
	int max , current ; // declaring the variables
	max=0; // initializing the variable
	current=0;
	printf("this program gives the maximum of three numbers\n"); //printing brief about the program
	printf("enter number1\n"); // here user gets to enter the number 1 which goes to the max variable
	scanf(" %d" , &max); // the variable max takes the number1
	
	printf("enter number2\n"); // printing the number 2 option for the user
	scanf(" %d" , &current); // here the user enters the number2

	if(current>max) // using if condition
	{
	   max=current;
	}
	
	printf("enter number3\n"); //  printing option for the user to enter the number 3
	scanf(" %d" , &current); // here user enters his number it goes into current variable

	if(current>max) // using if condition to compare current and max
	{
	   max=current;
	}
	
	printf(" the maximum of three numbers :%d\n" , max); // printing the final output the max of 3 numbers
	
}
