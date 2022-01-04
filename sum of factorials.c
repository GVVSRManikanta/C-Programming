#include<stdio.h>
int main()
{
	int sum=0,i,x,y,f;
	printf("enter the x:");
	scanf("%d",&x);
	printf("enter the y:");
	scanf("%d",&y);
	for(i=1;x<=y;x++,i++)
	{
		f=x;
		f=f*i;
		sum+=f;
	}
	
	printf("Sum of factorials : %d",f);
}
