/*name:lalith
program: checking the divisibility by 3,5,7,11
date:8-7-11 */

#include<stdio.h> // its a preprocessive directive
int main()
{
	int input=0; // initialising and declaring the variable input
	printf("Enter the input: "); // writes the input
	scanf(" %d", &input); // reads the input
	if(input%3==0)
	printf("the number is divisible by 3\n"); // printing its divisible by 3
	if(input%5==0)
	printf("the number is divisible by 5\n"); // printing its divisible by 5
	if(input%7==0)
	printf("the number is divisible by 7\n"); // printing its divisible by 7
	if(input%11==0)
	printf("the number is divisible by 11\n"); //printing its divisible by 11
	else
	printf("The given input is not divisible by any of the following numbers\n");
	return 0;
}

