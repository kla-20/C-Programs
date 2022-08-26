/*name:lalith
program:checking whether the given number is odd or even
date:8-7-19 */

#include<stdio.h> // its a preprocessive directive
int main()
{
	int input=0 ; // decalring and initialising the variable
	printf("Enter the input: "); // writing input
	scanf(" %d", &input); // reading input
	if(input!=0) // checking for the input is not equal to zero
	{
		if(input%2==0) // checking for even numbers
		printf("The number is EVEN\n"); // printing if condition satisfies
		
		else // checking for odd numbers
		printf("The number is ODD\n"); // printing if the condition doesnt satisfy

	}
	return 0 ;

}

