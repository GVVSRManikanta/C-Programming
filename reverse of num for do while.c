#include<stdio.h>
int main()
{
	int n,s=0,r;
	printf("Enter the n:");
	scanf("%d",&n);
	do
	{
		r=n%10;
		s=s*10+r;
		n=floor(n/10);
	}
	while(n!=0);
	printf("Reverse:%d",s);
}
