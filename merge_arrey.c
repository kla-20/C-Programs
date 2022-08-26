#include<stdio.h>
int main()
{
	int a[5];
	int b[5];
	int c[10];
	int i=0,j=0,k=0,temp=0;
	for(i=0;i<=4;i++)
	{
		printf("Enter %d input for first array: " , i);
		scanf(" %d" ,&a[i]);
	}
	printf("\n");
	for(j=0;j<=4;j++)
	{
		printf("Enter %d input for second array: " ,j);
		scanf(" %d" ,&b[j]);
	}

	for(i=0;i<=4;i++) //sorting both the arrays
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[i]>a[j]) //swap
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf(" %d\t" ,a[i]);
	}
	printf("\n");
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(b[i]>b[j]) //swap
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
		printf(" %d\t" ,b[i]);
		
	}
	printf("\n");
	while((i<5)&&(j<5))
	{
		if(a[i]<=b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=b[j];
			k++;
			j++;
		}

	}
	if(i>=4)
	{
		while(j<5)
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	else
	{
		while(i<5)
		{
			c[k]=a[i];
			k++;
			i++;
		}
	}
	for(k=0;k<10;k++)
	{
		printf("%d\t" , c[k]);
	}
	printf("\n");
	
		
}
