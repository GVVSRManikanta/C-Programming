#include<stdio.h>
int main()
{
	int n,s=0,r,x;
	printf("Enter the n:");
	scanf("%d",&n);
	x=n;
	do
	{
		r=n%10;
		s=s*10+r;
		n=floor(n/10);
	}
	while(n!=0);
	if(s==x)
	printf("Palindrome");
	else 
	printf("Not Palindrome");
}
