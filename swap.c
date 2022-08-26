/*name:lalith
program:swapping two numbers
date:3/7/19 */

#include<stdio.h> //its a preprocessive directive
int main()
{
	int input1=0 , input2=0 , temp=0 ; //declaring and initialising the variables
	printf("enter the input1"); //printing to enter the input1
	printf("enter the input2: "); //printing to enter the input2
	scanf(" %d%d" ,&input1,&input2); //scanning the input
	printf("\n");
	temp=input1;  // swapping the inputs using temp variable
	input1=input2;
	input2=temp;
	printf("The new input1 is %d , the new input2 is %d\n" , input1 ,input2); //printing the swapped nos 
	return 0 ;

}
