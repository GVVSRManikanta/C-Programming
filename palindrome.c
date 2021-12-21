#include<stdio.h>
int main()
{
	int n,s=0,r,x;
	printf("Enter the n:");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=floor(n/10);
	}
	if(s==x)
	printf("Palindrome");
	else 
	printf("Not Palindrome");
}
