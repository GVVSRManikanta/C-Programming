#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the a:");
	scanf("%d",&a);
	printf("Enter the b:");
	scanf("%d",&b);
	do
	{
		c=a%2;
		if(c==0)
		{
			printf("Even Nums are:%d\n",a);
		}
		a++;
	}
	while(a<b);
}
