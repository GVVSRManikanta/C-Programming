#include<stdio.h>
int main()
{
	int i,n,c,j=1;
	printf("Enter the i:");
	scanf("%d",&i);
	printf("Enter the n:");
	scanf("%d",&n);
	if(i==1)
	{
		while(i<=n)
		{
			c=i%2;
			if(c==0)
			{
				printf("Even Number:%d\n",i);
			}
			i++;	
		}
	}
	else if(i==2)
	{
		while(i<=n)
		{
			c=i%2;
			if(c==0)
			{}
			else
			{
				printf("Odd Number:%d\n",i);
			}
			i++;	
		}
	}
	else if(i==3)
	{
		while(i<=n)
	{
		j=j*i;
		i++;	
	}
	printf("Factorial of n:%d",j);
	}
}
