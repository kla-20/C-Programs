#include<stdio.h>
int main()
{
	int i=0,count=0;
	char arr_1[50]={};
	char arr_2[50]={};
	printf("Enter the char_1: \n");
	scanf(" %s" , &arr_1);
	printf("Enter the char_2: \n");
	scanf(" %s" , &arr_2);
	while((arr_1[i]!=0)&&(arr_2[i]!=0))
	{
		if((arr_1[i])==(arr_2[i]))
		{
			i++;
		}
		else if((arr_1[i])!=(arr_2[i]))
		{
			printf("Both strings are not the same\n");
			count=1;	
			break;
		}	
	}
	if(count==0)
	{
		printf("Both the strings are same,the size of both the strings is %d\n" , i);
	}
	return 0;
		
 	/*char input[10] = {};	
	scanf(" %s", input);*/
	

}
