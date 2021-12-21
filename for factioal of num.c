#include<stdio.h>
int main()
{
	int i,j=1,n;
	printf("Enter the n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=j*i;
		
	}
	printf("Factorial of n:%d",j);
}
