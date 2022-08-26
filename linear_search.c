#include<stdio.h>
#define n 10
int main()
{
	int i=0,j=0,temp=0,key=0,middle=0,flag=0;
/*	printf("Enter the size of the array: ");
	scanf(" %d" ,&n);
*/
	int input[n];
	for(i=0;i<=n-1;i++) //creating array
	{
		printf("Enter the input%d: " ,i);
		scanf(" %d" ,&input[i]);
	}
	printf("Enter the number you want to find: ");
	scanf(" %d" ,&key);
	for(i=0;i<=n-1;i++) //sorting array
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(input[i]>input[j])
			{
				temp=input[i];
				input[i]=input[j];
				input[j]=temp;
			}
		}
	}

		middle=(n-1)/2; // making the array into half
		for(i=0;i<=middle;i++) //1st array search
		{
			if(input[i]==key)
			printf("The key is found in 1st array in %d position\n" ,i);
			flag=1;
		}
	for(i=middle+1;i<=n-1;i++) //2nd array search
	{
		if(flag==1)
		break;
		else if(input[i]==key)
		printf("The key is found in 2nd array in %d position\n" ,i);
	}
	for(i=0;i<=middle;i++)
	{
		printf(" %d " ,input[i]);
	}
	printf("\n");	
	for(i=middle+1;i<=n-1;i++)
	{
		printf(" %d " , input[i]);
	}
	printf("\n"); 
}
