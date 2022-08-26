#include<stdio.h>
#define n 10
int binary(int,int,int);
int main()
{
	int input[n];
	int low=0,middle=0,high=n-1,key=0,result,i=0;
	result=binary(low, high,input[n])
	for(i=0;i<=n-1;i++)
	{
		printf("Enter the input %d: " ,i);
		scanf(" %d" ,&input[i]);
	}
	printf("Enter key: ");
	scanf(" %d" ,&key);
		
}

int binary(int low,int high,int key,int input[n])
{
	int middle=(low+high)/2;
	while(low<=high)
	{
		if(key<input[middle])
		{
			high=middle-1;
		}
		else if(key>input[middle])
		{
			low=middle+1;
		}
		else
		{
			return middle;
		}
	
	}
	
}
	

