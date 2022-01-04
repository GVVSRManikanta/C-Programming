#include<stdio.h>
int main()
{
	int sum=0,n,i,r,x=0,f,k;
	printf("enter the n:");
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
	r=n%10;
	f=1;
	for(i=1;i<=r;i++)
	{
	f=f*i;
	}
	x+=f;
	n=n/10;
	}
	if (k==x)
	printf("Number is Strong");
	else
	printf("Number is Not Strong");
}
