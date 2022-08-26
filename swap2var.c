/*name:lalith
program:swapping 2 numbers using 2 variables
date:8-7-19 */


#include<stdio.h> //its a preprocessive directive
int main()
{
	int a=0,b=0 ; // initialising and declaring two variables
	printf("enter a: "); // User writes a
	printf("enter b: "); //User writes b
	scanf(" %d%d" , &a,&b); //reading the inputs
	a=a+b; // manipulating using 2 variables
	b=a-b;
	a=a-b;
	printf("The swapped 'a'= %d\n" , a); // printing new a
	printf("The swapped 'b'= %d\n" , b); // printing new b
	return 0;

}


