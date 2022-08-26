#include<stdio.h>
int main()
{
	int input=0 ,tens=0, units=0;
	printf("Enter input: ");
	scanf(" %d" ,&input);
	tens=input/10;
	units=input%10;
		
		if(input<=99)
	{
		
		switch(input)
		{
			case 10: printf("ten\n");
			break;
			case 11: printf("eleven\n");
			break;
			case 12: printf("twelve\n");
			break;
			case 13: printf("thirteen\n");
			break;
			case 14: printf("fourteen\n");
			break;
			case 15: printf("fifteen\n");
			break;
			case 16: printf("sixteen\n");
			break;
			case 17: printf("seventeen\n");
			break;
			case 18: printf("eighteen\n");
			break;
			case 19: printf("nineteen\n");
			break;
		}
		
		switch(tens)
		{
			case 2: printf("twenty\t");
			break;
			case 3: printf("thirty\t");
			break;
			case 4: printf("forty\t");
			break;
			case 5: printf("fifty\t");
			break;
			case 6: printf("sixty\t");
			break;
			case 7: printf("seventy\t");
			break;
			case 8: printf("eighty\t");
			break;
			case 9: printf("ninety\t");
		}

		switch(units)
		{
			case 1:printf("one\n");
			break;
			case 2:printf("two\n");
			break;
			case 3:printf("three\n");
			break;
			case 4:printf("four\n");
			break;
			case 5:printf("five\n");
			break;
			case 6:printf("six\n");
			break;
			case 7:printf("seven\n");
			break;
			case 8:printf("eight\n");
			break;
			case 9:printf("nine\n");
			break;
		}
	}
}
