/*to find a number in an arrae */
#include<stdio.h>
int main()
{
	int input[10];
	int i=0,key=8,flag=0;
	for(i=0;i<=9;i++)
	{
		printf("Enter input_%d: ",i);
		scanf(" %d" ,&input[i]);
	}
	printf("Enter number you want to find: ");
	scanf(" %d" ,&key);
	for(i=0;i<10;i++)
	{
		if(key==input[i])
		{
			printf("Key %d is found in %d location in the array\n" ,key ,i);
			flag=1;
		}
		
	}
	if(flag==0)
	printf("Oops! your key is not found\n");
	
}
