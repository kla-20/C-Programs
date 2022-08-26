#include<stdio.h>
int main()
{
	int input=0,i;
	scanf(" %d" ,&input);
	for(i=1;i<=100;i++)
	{
		printf("%d" ,input%2);
		input=input/2;
		if(input==1)
		break;
		else
		continue;
	}
}
