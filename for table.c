#include<stdio.h>
int main()
{
	int i,n,t;
	printf("Enter the n:");
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
		t=n*i;
		printf("%d*%d=%d\n",n,i,t);
			
	}
}
