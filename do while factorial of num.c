#include<stdio.h>
int main()
{
	int i=1,j=1,n;
	printf("Enter the n:");
	scanf("%d",&n);
	do
	{
		j=j*i;
		i++;
	}
	while(i<=n);
	printf("Factorial of n:%d",j);
}
