#include<stdio.h>
int power(int m,int n);
int main()
{
	int m=0,n=0,result=0;
	printf("Enter base m: ");
	scanf("%d" ,&m);
	printf("enter exponent n: ");
	scanf("%d" ,&n);
	result=power(m,n);
	printf("result=%d\n" ,result);
}


int power(int m,int n)
{
	int i=0,result=1;
	for(i=1;i<=n;i++)
	{
		result=m*result;
	}
	return result;
}
	
