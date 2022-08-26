#include<stdio.h>
int factorial(int);
int main()
{
	int a=0,fact;
	printf("Enter the input: ");
	scanf(" %d" ,&a);
	fact=factorial(a);
	printf("%d\n" ,fact);
}

int factorial (int x)
{
	int f;
	if((x==1)||(x==0))
	return(1);

	else
	f=x*factorial(x-1);
	
	return(f);
}
	


	

