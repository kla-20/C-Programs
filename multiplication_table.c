/*name:lalith
program:writing multiplication table from - to 
date:8-7-19 */

#include<stdio.h> // its a preprocessive directive
int main()
{
	int from=0,to=0,i,j,result; // initialising and declaring the variables
	printf("Enter from: "); // User to enter from which table
	scanf(" %d",&from); // reading from which table
	printf("\n");
	printf("Enter to: "); // enter to where
	scanf(" %d" , &to); // reading to where
	printf("\n");
	for(i=from;i<=to;i+=1) // using outer loop for for from to to table
	{
		for(j=1;j<=10;j+=1) // using inner loop for (eg.2*1=2)
		{
			result=i*j; //initialising result
			printf("%d*%d=%d\n" , i,j,result); // note:here \n is very important and printing the table
		}
		printf("\n");
	}
	return 0;
}


