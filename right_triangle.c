/*name:lalith
program:with given input frame a right angled triangle
date:10-7-19 */

#include<stdio.h> // its a preprocessive directive
int main()
{
	int i,j,n ;
	printf("Enter n: ");
	scanf(" %d" , &n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}


}
