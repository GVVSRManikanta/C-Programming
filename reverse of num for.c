#include<stdio.h>
int main()
{
	int n,s=0,r;
	printf("Enter the n:");
	scanf("%d",&n);
	for(n;n!=0;n=floor(n/10))
	{
		r=n%10;
		s=s*10+r;
		
	}
	printf("Reverse:%d",s);
}
