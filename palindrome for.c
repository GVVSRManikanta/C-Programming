#include<stdio.h>
int main()
{
	int n,s=0,r,x;
	printf("Enter the n:");
	scanf("%d",&n);
	x=n;
	for(n;n!=0;n=floor(n/10))
	{
		r=n%10;
		s=s*10+r;
	}
	if(s==x)
	printf("Palindrome");
	else 
	printf("Not Palindrome");
}
