#include<stdio.h>
int main()
{
	int input[10];
	int i,k,temp;
	for(i=0;i<=9;i++)
	{
		printf("Enter input_%d: " ,i);
		scanf(" %d" ,&input[i]);
	}
	
	for(i=0;i<=9;i++)
	{
		for(k=i+1;k<=10;k++)
		{
			if(input[i]>input[k])
			{
				temp=input[i];
				input[i]=input[k];
				input[k]=temp;
			}
		}
		printf("%d\n" ,input[i]);
	
	}
	
		
		
	
}
