#include<stdio.h>
int fibonacci(int);
int main()
{
	int x=0, y;
	printf("Enter x: ");
	scanf(" %d" ,&x);
	y=fibonacci(x);
	printf(" %d\n" ,y);
}

int fibonacci(int n)
{
	if(n==1)
	return(1);
	else
	return(fibonacci(n-1)+fibonacci(n-2));
}
