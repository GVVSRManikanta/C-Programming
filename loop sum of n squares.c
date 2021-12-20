#include<stdio.h>
int main()
{
	int i=1,n,p=0;
	printf("Enter the n:");
	scanf("%d",&n);
	while(i<=n)
	{
		p=i*i+p;
		i++;	
	}
	printf("Sum of n square:%d",p);
}
