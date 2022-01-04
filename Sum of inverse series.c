#include<stdio.h>
int main()
{
	float sum=0,n,i;
	printf("enter the n:");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
	sum=sum+(float)(1/i);
	}
	printf("Sum of series: %.2f",sum);
}
