#include<stdio.h>
int main()
{
	int x,i=1,c=0;
	printf("Enter the value:");
	scanf("%d",&x);
	if(i>x)
	{
		if(x%i==0)
		{
			c=c+1;
			i=i+1;
		}
	}
	else
	{
		if(c=2)
		{
			printf("Prime");
		}
		else
		{
			printf("Not Prime");
		}
	}
}
