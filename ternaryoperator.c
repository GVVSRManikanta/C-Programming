#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the first number-");
	scanf("%d",&a);
	printf("\nEnter the Second number-");
	scanf("%d",&b);
	c=(a>b)?a:b;
	printf("\n%d",c);
}

