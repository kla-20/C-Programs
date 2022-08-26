#include<stdio.h>
int main()
{
	int i=0;
	char input[100]={} ;
	char ch;
	printf("Enter string- ");
	scanf(" %s" , input);
	printf("Enter the char you want to delete- ");
	scanf(" %c" , ch);
	while(input[i]!='/0')
	{
		input[i]=input[i+1] ;
		i++;
	}
	printf(" %s" , input);
	printf("\n");
}
