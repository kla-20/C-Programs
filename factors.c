/*name:lalith
program:given a number, give its factors
date:10-7-19 */

#include<stdio.h> // its a preprocessive directive
int main()
{
	int input=0,div; // initialising and declaring the variables
	printf("Enter the input: "); //write input
	scanf(" %d", &input); //read input
	for(div=1;div<=input;div+=1)
	{
		if(input%div==0)
		printf("%d\n",div); //printing the div since it is a factor
	}
	return 0;

}
