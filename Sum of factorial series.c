#include<stdio.h>
int main()
{
	

	int sum,n,i,x,f=1,j,p;
	printf("enter the n:");
	scanf("%d",&n);
	printf("enter the x:");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
	f=1;
	for(j=1;j<=i;j++)
	{
	f*=j;
	}
	p=(pow(x,i));
	sum+=(p/f);
	}
	printf("Sum of series: %d",sum);

}
