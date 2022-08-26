#include<stdio.h>
int main()
{
	int i=0, k=1,l=0;
	char input[100]={} ;
	int count[100]={};
	printf("Enter the string- " );
	scanf(" %s" , input);
	while(i<=5)
	{	
		while(k<=5)
		{	
			if(input[i]==input[k]);
			{
				l++;
			}
			k++;
		}
		count[i]=l  ;
		i++;
		
	}
	i=0;
	printf(" %s\n"  , input);
	while(i<=5)
	{
		printf(" %c -%d\n" , input[i], count[i]);
		i++;
	}
	
		
		
}
