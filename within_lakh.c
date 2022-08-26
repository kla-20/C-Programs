#include<stdio.h>
int main()
{
	int input=0,l,h,t,flag;
	printf("Enter input: ");
	scanf(" %d" ,&input);
	l=input/1000;
	h=input%1000;
	t=h%100;
	flag=0;
	switch(l)
	{
		case 1: printf("one thousand\t");
		break;
		case 2: printf("two thousand\t");
		break;
		case 3: printf("three thousand\t");
		break;
		case 4: printf("four thousand\t");
		break;
		case 5: printf("five thousand\t");
		break;
		case 6: printf("six thousand\t");
		break;
		case 7: printf("seven thousand\t");
		break;
		case 8: printf("eight thousand\t");
		break;
		case 9: printf("nine thousand\t");
		break;
		case 10: printf("ten thousand\t");
		break;
		case 11: printf("eleven thousand\t");
		break;
		case 12: printf("twelve thousand\t");
		break;
		case 13: printf("thirteen thousand\t");
		break;
		case 14: printf("fourteen thousand\t");
		break;
		case 15: printf("fifteen thousand\t");
		break;
		case 16: printf("sixteen thousand\t");
		break;
		case 17: printf("seventeen thousand\t");
		break;
		case 18: printf("eighteen thousand\t");
		break;
		case 19: printf("nineteen thousand\t");
		break; 
	}

		if(l/10==0)
		{
			switch(l/10)
			{
			case 2: printf("twenty thousand\t");
			break;
			case 3: printf("thirty thousand\t");
			break;
			case 4: printf("forty thousand\t");
			break;
			case 5: printf("fifty thousand\t");
			break;
			case 6: printf("sixty thousand\t");
			break;
			case 7: printf("seventy thousand\t");
			break;
			case 8: printf("eighty thousand\t");
			break;
			case 9: printf("ninety thousand\t");
			break;
			}
		}
			
		else
		{
			switch(l/10)
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
			case 8:printf("eighty\t");
			break;
			case 9: printf("ninety\t");
			break;
			}
		
	

	
			switch(l%10)
			{
			case 1: printf("one thousand\t");
			break;
			case 2:printf("two thousand\t");
			break;
			case 3: printf("three thousand\t");
			break;
			case 4: printf("four thousand\t");
			break;
			case 5: printf("five thousand\t");
			break;
			case 6: printf("six thousand\t");
			break;
			case 7: printf("seven thousand\t");
			break;
			case 8: printf("eight thousand\t");
			break;
			case 9: printf("nine thousand\t");
			break;
			}
		}
	
		switch(h/100)
		{
		case 1: printf("one hundred\t");
		break;
		case 2: printf("two hundred\t");
		break;
		case 3: printf("three hundred\t");
		break;
		case 4: printf("four hundred\t");
		break;
		case 5: printf("five hundred\t");
		break;
		case 6: printf("six hundred\t");
		break;
		case 7: printf("seven hundred\t");
		break;
		case 8: printf("eight hundred\t");
		break;
		case 9: printf("nine hundred\t");
		break;
		}
	
	switch(t)
	{
		case 00: break;
		case 01: printf("and\n");
		break;
		case 02: printf("and\n");
		break;
		case 03: printf("and\n");
		break;
		case 04: printf("and\n");
		break;
		case 05: printf("and\n");
		break;
		case 06: printf("and\n");
		break;
		case 07: printf("and\n");
		break;
		case 8: printf("and\n");
		break;
		case 9: printf("and\n");
		break;
		case 10: printf("and ten\n");
		break;
		case 11: printf("and eleven\n");
		break;		
		case 12: printf("and twelve\n");
		break;
		case 13: printf("and thirteen\n");
		break;
		case 14: printf("and fourteen\n");
		break;
		case 15: printf("and fifteen\n");
		break;
		case 16: printf("and sixteen\n");
		break;
		case 17: printf("and seventeen\n");
		break;
		case 18: printf("and eighteen\n");
		break;
		case 19: printf("and nineteen\n");
		break;
		flag=1;
	}
	
	if(flag==0)
	{
		switch(t/10)
		{
			case 2: printf("and twenty\t");
			break;
			case 3: printf("and thirty\t");
			break;
			case 4: printf("and forty\t");
			break;
			case 5: printf("and fifty\t");
			break;
			case 6: printf("and sixty\t");
			break;
			case 7: printf("and seventy\t");
			break;
			case 8: printf("and eighty\t");
			break;
			case 9: printf("and ninety\t");
			break;
		}
		
		switch(t%10)
		{
			case 1: printf("one\n");
			break;
			case 2: printf("two\n");
			break;
			case 3: printf("three\n");
			break;
			case 4: printf("four\n");
			break;
			case 5: printf("five\n");
			break;
			case 6: printf("six\n");
			break;
			case 7: printf("seven\n");
			break;
			case 8: printf("eight\n");
			break;
			case 9: printf("nine\n");
			break;
		}

	}
}


