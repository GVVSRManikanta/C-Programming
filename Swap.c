#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the a-");
	scanf("%d",&a);
	c=a;
	printf("\nEnter the b-");
	scanf("%d",&b);
	a=b;
	b=c;
	printf("\nA- %d\nB- %d",a,b);
}
