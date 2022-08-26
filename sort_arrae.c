/*objective to find the min element in the given array */
#include<stdio.h>
int main()
{
	int input[10]= {};	
	int i=0,j=0,temp=0;
	for(i=0;i<=9;i++) //creating array
	{
		printf("Enter input_%d: " ,i);
		scanf(" %d" ,&input[i]);
	}
	printf(" Array before sorting: \n ");
	for(i=0;i<=9;i++)
	{
		printf(" %d " , input[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(input[i]>input[j]) //then swap
			{
				temp=input[i];
				input[i]=input[j];
				input[j]=temp;
			}
		}
	}
	printf(" Array after sorting: \n ");
	for(i=0;i<=9;i++)
	{
		printf(" %d " , input[i]);
	}
}
