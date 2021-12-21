#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter the n:");
	scanf("%d",&n);
	do
	{
		s=s+floor(n%10);
		n=floor(n/10);
	}
	while(n!=0);
	printf("sum of digits:%d",s);
}
