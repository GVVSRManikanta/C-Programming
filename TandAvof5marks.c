#include<stdio.h>
main()
{
	int a,b,c,d,e,S,Av;
	printf("Enter the subject 1 mark-");
	scanf("%d",&a);
	printf("\nEnter the subject 2 mark-");
	scanf("%d",&b);
	printf("Enter the subject 3 mark-");
	scanf("%d",&c);
	printf("Enter the subject 4 mark-");
	scanf("%d",&d);
	printf("Enter the subject 5 mark-");
	scanf("%d",&e);
	S=a+b+c+d+e;
	Av=S/5;
	printf("\n%d\n%d",S,Av);
}

