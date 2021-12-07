//finding divisibility of 5
#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a%5==0 | a%5==5)
	{
		printf("Divisible");
	}
	else
	{
		printf("Not Divisible");
	}
}
