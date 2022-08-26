/*Finding pytogoren triplet that add upto 1000 and whose sum of squares of 2 is the square of 3rd side */
#include<stdio.h>  //its a preprocessive directive
int main()
{
	int a=1,b=1,c=1; //declaring variables
	while(a<1000) // checking for all values in a<1000
	{
		while(b<1000) // for one a value checking for all b values i.e <1000
		{
			while(c<1000) // for one a and one b checking for all c values<1000
			{
				if(a+b+c==1000) // if a,b,c satisfy this condition
				{
					if((a*a)+(b*b)==(c*c)) // if they satisfy pythogores eqn
					{
						printf("(%d,%d,%d) are the triplets\n",a,b,c); // a,b,c are pythogoren triplets
						break;
					}
					else
					continue; // else the a,b,c changes
				}
				c++; // incrementing c
			}
			b++; //incrementing b
		}
		a++; //incrementing a
	}
	return 0;

}
