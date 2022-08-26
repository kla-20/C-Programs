/*name:lalith
program: max of N numbers using loops
date:26/06/19 */


#include<stdio.h> //its preprocessive directive
int main() 
{
	int max, count, current ; //declaring the variables
	max=0; //initialising the variables
	current=0;
	count=1;
	
	printf("this program gives max of n numbers using loops"); // printing about the program
	
	printf("\n");

	while(count<=10)
	{
		printf(" enter number %d: " ,count); //printing numbers in loop
		scanf(" %d", &current); //giving number
		
		if(current>max)
		{
			max=current;
		}
		count++;
		

	}	

	printf(" this is the max number : %d\n" ,max);
}
