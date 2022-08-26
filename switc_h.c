/*name:lalith
date:22/7/19
program:using switch and writing number into corresponding words */

#include<stdio.h> //its a preprocessive directive
int main()
{
	int input=0; //decalring and initialising  the variable
	printf("enter input: "); //write input
	scanf(" %d" ,&input); //read input
	switch(input) //insted of else if
	{
		case 1:printf("The number is 'ONE'\n"); //condn check else if for'1'
		break;
		case 2:printf("The number is 'TWO'\n"); //for'2'
		break;
		case 3:printf("The number is 'THREE'\n"); //for'3'
		break;
		case 4:printf("The number is 'FOUR'\n");// for'4'
		break;
		case 5:printf("The number is 'FIVE'\n"); // for'5'
		break;
		case 6:printf("The number is 'SIX'\n"); //for '6'
		break;
		case 7:printf("The number is 'SEVEN'\n"); //for'7'
		break;
		case 8:printf("The number is 'EIGHT'\n"); //for'8'
		break;
		case 9:printf("The number is 'NINE'\n"); //for'9'
		break;
		default:printf("Oops, your input cannot get changed into its words\n"); //if nothing by default print this statement
	}
	

}

