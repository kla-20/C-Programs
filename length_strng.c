#include<stdio.h>
int main()
{
	char input[10]= "sairam";
	int i=0,count=0;
	printf("string is %s\n" , input);
	while(input[i] != '\0')
	{
			count=count+1;
			i++;
	}	
	printf("the length of the string is %d\n" , count);
}
	
	
	
