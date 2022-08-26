/*name:lalith
program:mini calculator
date:26/7/19 */

#include<stdio.h> //its a preprocessive directive
int main()
{
	int input_1=0,input_2=0; //declaring and initialising the variables
	char oper;
	printf("enter input_1: "); //write input_1
	scanf(" %d", &input_1);//read it
	printf("enter input_2: "); //write input_2
	scanf(" %d" ,&input_2); //read it
	printf("enter oper: "); //write oper
	scanf(" %c" ,&oper); //read it 
	if(oper=='*') // multiplication operation
	{
		printf("%d*%d=%d\n" ,input_1, input_2, input_1*input_2);
	}
	if(oper=='+') // addition operation
	{
		printf("%d+%d=%d\n" ,input_1,input_2, input_1+input_2);
	}
	if(oper=='-') //subtraction operation
	{
		printf("%d-%d=%d\n" ,input_1,input_2,input_1-input_2);
	}
	if(oper=='/') //division operation
	{
		printf("%d/%d=%d\n" , input_1,input_2,input_1/input_2);
	}
	if(oper=='%') //modulii operation
	{
		printf("(%d)%(%d)=%d\n", input_1,input_2,(input_1)%(input_2));
	}
}
