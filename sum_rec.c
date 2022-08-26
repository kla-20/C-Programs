#include<stdio.h>
int sum(int);
int main()
{
	int input=0,i=0,j=0,k=0;
	scanf(" %d", &j);
	for(i=1;i<=j;i++)
	{
		printf("Enter input_%d: " ,i);
		scanf(" %d\n" ,&input_i);
	}
	k=sum(j);
	printf(" %d\n" ,k);
}

int sum(j)
{
	int Y=0;
	if((j>0)&&(j-1>0)&&(j-2>0)&&(j>=1))
	{
		Y=sum(j-1)+sum(j-2);
	}
}
	
	
	
	
