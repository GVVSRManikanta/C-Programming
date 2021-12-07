//Finding the year is leap or not
#include<stdio.h>
main()
{
	int a;
	printf("Type Year:");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("Leap Year");
	}
	else
	{
		printf("Non Leap Year");
	}
}
