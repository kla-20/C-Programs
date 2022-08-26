/*objective to find the min element in the given array */
#include<stdio.h>
int main()
{
	int input[10];	
	int i=0,j=0,temp=0,min_index=0;
	for(i=0;i<=9;i++) //creating array
	{
		printf("Enter input_%d: " ,i);
		scanf(" %d" ,&input[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(input[i]>input[j]) //then swap
			min_index=j;
			temp=input[min_index];
			input[i]=input[min_index];
			input[min_index]=temp;
			
		}
	}
	for(i=0;i<=9;i++)
	{
		printf("%d" , input[i]);
	}
}
