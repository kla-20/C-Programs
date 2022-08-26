#include<stdio.h>
int main()
{
	int input[10];
	int i=0,avg=0,sum=0;
	for(i=0;i<=9;i++)
	{
		printf("Enter the input_%d: " ,i);
		scanf(" %d" ,&input[i]);
	}
	for(i=0;i<=9;i++)
	{
		sum=sum+input[i];	
	}
	avg=sum/10 ;
	printf("The average of the given numbers in the given array is %d\n" ,avg);

}
