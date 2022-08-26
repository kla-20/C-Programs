//rough program


#include<stdio.h>
int main()
{
	int input=0,div; 
	printf("enter the input: ");
	scanf(" %d", &input);
	for(div=1;div<=input;div+=1)
	{
		if(input%div==0)
		printf("%d is the factor of %d\n" , div ,input) ; 
	}
	return 0;
}
