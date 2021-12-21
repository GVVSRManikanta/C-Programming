#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the a:");
	scanf("%d",&a);
	printf("Enter the b:");
	scanf("%d",&b);
	for(a;a<b;a++)
	{
		c=a%2;
		if(c==0)
		{
			printf("Even Nums are:%d\n",a);
		}
	}
}
