#include<stdio.h>
int main()
{
	int ba,gt,hra,da;
	printf("Basic Salary:");
	scanf("%d",&ba);
	gt=ba+hra+da;
	if(ba<=10000)
	{
	hra=(ba*20)/100;
	da=(ba*80)/100;
	printf("%d",gt);
	}
	else if(ba<=20000)
	{
	hra=(ba*25)/100;
	da=(ba*90)/100;
	printf("%d",gt);
	}
	else if(ba>20000)
	{
	hra=(ba*30)/100;
	da=(ba*95)/100;
	printf("%d",gt);
	}
	return 0;
}
