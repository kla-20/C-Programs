#include<stdio.h>
int main()
{
	int i=0,count=0;
	char ch;
	char input[100]={};
	printf("Enter string-");
	scanf(" %s", input);
	printf("Enter character to delete-");
	scanf(" %c", &ch);
	while(input[i]!='\0')
	{
		if(input[i]==ch)
		{
			input[i]=' ' ;
		}
		i++;
	}
	printf(" %s" , input);
	printf("\n");
	
}
