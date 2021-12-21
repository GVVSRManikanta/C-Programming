#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter the n:");
	scanf("%d",&n);
	for(n;n!=0;n=floor(n/10))
	{
		s=s+floor(n%10);
		
	}
	printf("sum of digits:%d",s);
}
