#include<stdio.h>
int main()
{
	int x;
	printf("Enter the Number:");
	scanf("%d",&x);
	switch(x%2)
	{
		case 0:printf("Even");
				break;
		default:printf("Odd");
	}
}

