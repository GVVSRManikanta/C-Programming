#include<stdio.h>
int main()
{
	int i=1,n,t;
	printf("Enter the n:");
	scanf("%d",&n);
	do
	{
		t=n*i;
		printf("%d*%d=%d\n",n,i,t);
		i++;	
	}
	while(i<=20);
}
