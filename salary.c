#include<stdio.h>
int main()
{
	int w,e,h=100;
	printf("Enter week hours: ");
	scanf("%d",&w);
	if(w<=40)
	{
	e=h*w;
	printf("%d",e);
	}
	else
	{
	e=40*h+(w-40)*h*1.5;
	printf("%d",e);
	}
}
