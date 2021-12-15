#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the a:");
	scanf("%d",&a);
	printf("Enter the b:");
	scanf("%d",&b);
	while(a<b)
	{
		c=a%2;
		if(c==0)
		{
			printf("Even Nums are:1%d\n",a);
		}
		a++;
	}
	
}
