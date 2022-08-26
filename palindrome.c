#include<stdio.h>
int main()
{
	int i=0,j=0,count=0;
	char input[100]={};
	char output[100]={};	
	printf("Enter the string input-");
	scanf(" %s" ,input);	
	while(input[i]!='\0') // calculating the index
	{
		i++;
		count++;
	}	
	i=0;
	j=count-1;
	while((j>=0)&&(i<=count-1)) //arranging string in revrse
	{
		output[j]=input[i];
		j--;
		i++;
	}
	count=0;
	for(j=0;j<=i;j++) // calculating if both strings are equal
	{
		if(input[j]!=output[j])
		{
			count=1;
			break;
		}	
		else
		continue;
	}
	if(count!=1)
	{
		printf("%s is a palindrome having %d boxes\n", input, i);
	}
	else
	{
		printf("%s is not a palindrome\n" , input);
	}
}
