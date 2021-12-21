#include<stdio.h>
int main()
{
	int a=850,b=900,c;
	do
	{
		c=a%5;
		if(c==0)
		{
			printf("5 multiples:%d\n",a);	
		}
		a++;
	}
	while(a<b);
}
