#include<stdio.h>
int main()
{
	char letter ;
	int i;
	printf("enter the alphabet ");
	scanf(" %c" ,&letter);
	i=letter-32;
	printf("The block letter for the given alphabet is %c\n" ,i);
}
