/*to find mins and maxs in the array*/
#include<stdio.h>
int main()
{
	int input[10];
	int i=0,j=0,temp=0;
	for(i=0;i<=9;i++)
	{
		printf("Enter input_%d: " ,i);
		scanf(" %d" ,&input[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(input[i]>input[j])
			{
				temp=input[i];
				input[i]=input[j];
				input[j]=temp;
			}
		}
	
	}
	printf("min_1=%d\n" ,input[0]);
	printf("min_2=%d\n" ,input[1]);
	printf("max_1=%d\n" ,input[9]);
	printf("max_2=%d\n" ,input[8]); 
	
}
	

