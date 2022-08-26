/*name:lalith
program:reversing a 3 digit number and throwing an error if the number given is not 3 digit
date:5/7/19 */


#include<stdio.h> //its a preprocessive directive
int main()
{
	int input=0, reverse=0, temp=0 ; //decalring and initailising the variables
	printf("enter the input:") ; // printing to take the input from the user
	scanf(" %d" , &input); //entering the input from the user
	printf("\n");
	for(input!=0;input<999;input++) // giving into for loop
	{
		temp=input%10 ; // using the modulus operation
		reverse=temp+reverse; //assigning the variables
		input=input/10;
	}
	
	printf("The reverse of the given input=%d\n" , reverse); //printing the output
	printf("\n");
	return 0 ;
}

