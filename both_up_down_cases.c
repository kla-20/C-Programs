#include<stdio.h>
int main()
{
	int i=0;
	char input[100]={} ;
	int middle[100]={0} ; 
	printf("Enter the string- ");
	scanf(" %s" , input);
	while(input[i]!='\0')
	{
		middle[i]=input[i];
		i++;
	}
	i=0;
	while(middle[i]!=0)
	{
		if(97<=middle[i]<=122)
		{
			middle[i]=middle[i]-32  ;
			i++;
		}
		else // if(65<=middle[i]<=90)
		{
			middle[i]=middle[i]+32	;	
			i++;	
		}
	}
	i=0;
	while((middle[i]!=0)&&(input[i]!='\0'))
	{
		input[i]=middle[i];
		i++;
	}
	printf(" %s" , input);
	printf("\n");
}

