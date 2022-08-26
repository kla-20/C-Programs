#include<stdio.h>
int main()
{
	int input[10];
	int i=0,j=0,sum=0,temp=0;
	int avg=0;
	for(i=0;i<=9;i++)
	{
		printf("enter the input_%d: " ,i);
		scanf(" %d", &input[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++);
		{
			if(input[i]>input[j])
			{
				temp=input[i];
				input[i]=input[j];
				input[j]=temp;
			}
		}
	}
	for(i=0;i<=9;i++)
	{
		sum=sum+input[i];
	}
	avg=sum/10;
	for(i=0;i<=9;i++)
	{
		if(input[i]>avg)
		{
			printf(" %d\n" ,&input[i]);
		}
			
	}
}
