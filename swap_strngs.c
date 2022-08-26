#include<stdio.h>
int main()
{
	char input[10]="sairam" ;
	char output[10]={} ;
	int i=0,j=0,count=1;
	while((i<10)&&(j<10))
	{
		if(input[i]!='\0')
		{
			count=count+1;
			output[j]=input[i];
			j++;
			i++;	
		}
		else
		break;
	}
	printf("the input string is below\n");
	for(i=0;i<10;i++)
	{
		printf("%c" , input[i]);
	}	
	printf("\n");
	printf("the output string is below\n");
	for(j=0;j<=count;j++)
	{
		printf("%c\t" , output[j]);
	}
	printf("\n");
	printf("%d\n" ,count);
	printf("%d\n" ,j);
		
	
		
		
}
	
	
