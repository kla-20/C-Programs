#include<stdio.h>
int rec(int,int);
int main()
{
	int a=0,b=0,c;
	printf("enter 2 nos");
	scanf(" %d%d" ,&a, &b);
	c=rec(a,b);
	printf("%d" ,c);
	
}

int rec(int x,int y)
{
	int f;
	f=(x+y)*rec(x,y);
	return f;
}

	

