#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter the n:");
	scanf("%d",&n);
	while(i<n+1)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}
