#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter the n:");
	scanf("%d",&n);
	do
	{
		sum=sum+i;
		i++;
	}
	while(i<n+1);
	printf("%d",sum);
}
