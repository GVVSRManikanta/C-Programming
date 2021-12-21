#include<stdio.h>
int main()
{
	int i,n,p=0;
	printf("Enter the n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=i*i+p;
		
	}
	printf("Sum of n square:%d",p);
}
