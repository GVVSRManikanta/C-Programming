#include<stdio.h>
int main()
{
	int i=1,n,t;
	printf("Enter the n:");
	scanf("%d",&n);
	while(i<=20)
	{
		t=n*i;
		printf("%d*%d=%d\n",n,i,t);
		i++;	
	}
}
