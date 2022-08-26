/*name:lalith
program:with given input frame a right angled triangle
date:10-7-19 */

#include<stdio.h> // its a preprocessive directive
int main()
{
	int i=0,j=0,input=0; //declaring and initialising the variables
	printf("Enter the value of input: "); //write input
	scanf(" %d" ,&input);
	printf("\n");
	for(i=1;i<input;i++)
	{
		for(j=1;j<input;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	for(i=1;i<input;i++)
	{
		printf("\n");
	}
		
}
