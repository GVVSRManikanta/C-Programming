//divisibility of 5 and 11
#include<stdio.h>
main()
{
	int a;
	printf("a:");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	{
		printf("Divisible");
	}
	else
	{
		printf("Not Divisible");
	}
}
