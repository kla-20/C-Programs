a*program to find whether 2 strings are anagrams or not */
#include<stdio.h> //its a preprocessive directive
int main()
{
	int i=0,j=0,k=0,count=0,flag=0,check=0,lock=0,key=0; // declaring and initialising the variables
	char input_1[26]={}; // creating string  input_1
	char output_1[26]={}; // creating string for reversing the input_1
	char input_2[26]={}; // creating string_2 for checking 
	char new[100]={};
	printf("Enter input_1- "); //write input_1
	scanf(" %s" , input_1); //read input_1
	printf("Enter input_2- "); //write input_2
	scanf(" %s", input_2); //read input_2
	while(input_1[i]!='\0') // caluculating count for input_1
	{
		i++;
		count++;
	}
	i=0;
	while(input_2[i]!='\0') //calculating check(count) for input_2
	{
		i++;
		check++;
	}
	if(check!=count) //checking the size of the string before comparision 
	{
		lock=1; //checking that both are of different sizes so not equal
	}
	k=count-1; 
	j=count-1;
	i=0;
	while((i<=k)&&(j>=0))  // reversing input_1
	{
		output_1[j]=input_1[i];
		i++;
		j--;
	}
	j=0;
	while((j<=k)&&(lock!=1)) // comparing strings and lock!=1 i.e they have same count -check==count
	{
		if(output_1[j]==input_2[j])
		{
			j++;
			flag++; // checking the string size
		}
		else
		break;
			
	}	
	if(flag-1==k)
	{
		printf(" %s and %s are anagrams\n" , input_1 , input_2);
	}
	else
	printf(" %s and %s are not anagrams\n" , input_1, input_2); 
	/* other way */
	if(lock!=1) 	// satisfying only if both the sizes are equal
	{
		for(i=0;i<=k;i++)
		{
			for(j=0;j<=k;j++)
			{
				if(input_1[i]==input_2[j]); //checking the character of the input_1 with the every element  in the other one
				{	
					new[i]=input_2[j]; // if found in the new string the char will be stored
				}
				j++;
			}
			i++;
		}
	}
	for(i=0;i<=k;i++) //checking the new string and input_1 are equal
	{
		if(input_1[i]==new[i])
		{
			key++;
		}
		i++;
	}
	if(key-1==k) // if the key(count)  is  same 
	{
		printf("They are anagrams\n"); 
	}
	else //  if the count is not same
	{
		printf("They are not anagrams\n");
	}
	return 0;
}
