/*name:lalith
program:when given no of rows by the user print the rows in form of square
date:12-7-19 */

#include<stdio.h> // its a preprocessive directive
int main()
{
	int i,j,n; // declaring and initialising the variables
	printf("Enter n: ");
	scanf(" %d" , &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf(" * ");
		}
		printf("\n");

	}

}
