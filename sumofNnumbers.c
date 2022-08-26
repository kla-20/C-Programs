/*name:lalith
program:sum of N numbers
date:28/06/19*/

#include<stdio.h> //its a preprocessive directive
int main() 
{
	int n=0, number=0, count=0,sum=0; //declaring the variables
	printf("\n");
	
	printf("enter total number of inputs n:");
	scanf(" %d" , &n);// scanning the total number of inputs
	printf("\n");

	for(count=1;count<=n;count=count+1) // using the loop
	{
		printf("enter %d number :  " ,count); //enter the inputs using the count
		scanf(" %d" , &number); //scanning the inputs
		printf("\n");
		sum=sum+number ;
	}
	printf("sum of n numbers=%d\n" , sum); //printing the result
}
