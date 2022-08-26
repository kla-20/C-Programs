/*name:lalith
program:calculate m raise to n
date:10-7-19 */

#include<stdio.h> // its a preprocessive directive
int main()
{
	int m=0,product,n=0,count; // initialising and declaring the variables
	printf("enter m: "); // write m
	scanf(" %d", &m); //read m
	printf("enter n: "); //write n
	scanf(" %d", &n); // read n
	product=m  ; //taking m as base
	count=1; // counting 1 time
	for(;count<n;count++) //for loop for increasing the power of m_n times
	{
		product=product*m; // incrementing product
	}
	printf("The m raise to n for the given inputs=%d\n" , product); // printing result 
	return 0;
}

