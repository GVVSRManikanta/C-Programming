//Checking the triangle formation
#include<stdio.h>
main()
{
	int a,b,c;
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	printf("c:");
	scanf("%d",&c);
	if(a+b+c==180 && a+b>=c && b+c>=a && a+c>=b)
	{
		printf("Form Triangle");
	}
	else
	{
		printf("Cannot Form Triangle");
	}
}
