#include<stdio.h>
int main()
{
	int i=1,n,p=0;
	printf("Enter the n:");
	scanf("%d",&n);
	do
	{
		p=i*i+p;
		i++;
	}
	while(i<=n);
	printf("Sum of n square:%d",p);
}
