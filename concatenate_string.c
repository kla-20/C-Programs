#include<stdio.h>
int main()
{
	char input_1[30]="dsgurhuigqhrwg" ;
	char input_2[40]="herguhrugwuihjbgrh";
	char output[70]={} ;
	int i=0,j=0,k=0,l=0,count=0;
	for(i=0;i<30;i++)
	{
		if(input_1[i]!='\0')
		{
			j++;           // size of input_1 is j
		}
	}
	for(i=0;i<40;i++)
	{
		if(input_2[i]!='\0')
		{
			k++;        //size of input_2 is k
		}
	}
	while(l<j+k)
	{
		for(i=0;i<j;i++)
		{
			output[l]=input_1[i];
			l++;
		}
		if(i>=j)
		{
			for(i=0;i<k;i++)
			{
				output[l]=input_2[i];
			}
		}
			
	}
	for(i=0;i<l;i++)
	{
		printf("%c\t" , output[l]);
	}
	printf("\n");
		
}
	

