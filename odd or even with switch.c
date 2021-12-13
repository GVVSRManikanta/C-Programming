#include<stdio.h>
int main()
{
	int x;
	printf("Enter the Number:");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:printf("Odd");
				break;
		case 2:
		case 4:
		case 6:
		case 8:printf("Even");
				break;
		default:printf("Enter valid digit");
	}
}

