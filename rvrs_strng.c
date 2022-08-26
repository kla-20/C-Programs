#include<stdio.h>
int main()
{
	int i=0,j=0,count=0;
	char strng_1[100]={};
	char strng_2[100]={};
	printf("Enter the strng_1: ");
	scanf(" %s" , strng_1);
	while(strng_1[i]!='\0')
	{
		count++;
		i++;
	}
	i=0;
	j=count;
	while((i<=count)&&(j>=0))
	{
		strng_2[j]=strng_1[i];
		j--;
		i++;
	}
	printf("The reverse string for the given  one is-");
	for(j=0;j<=i;j++)
	{
		printf("%c" , strng_2[j]);
	}
	printf("\n");

}
