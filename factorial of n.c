#include<stdio.h>
int main()
{
	int i=1,j=1,n;
	printf("Enter the n:");
	scanf("%d",&n);
	while(i<=n)
	{
		j=j*i;
		i++;	
	}
	printf("Factorial of n:%d",j);
}
