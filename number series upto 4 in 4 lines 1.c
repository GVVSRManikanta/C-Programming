#include<stdio.h>
int main()
{
	int i,j,x=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			for(x=1;x>=j;x++)
			printf("%d",x);
		}
		printf("\n");
	}
}
