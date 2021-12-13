#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	char x;
	printf("\nEnter the operator:");
	scanf("%c",&x);
	printf("Enter the Number:");
	scanf("%d",&a);
	printf("\nEnter the Number:");
	scanf("%d",&b);
	switch(x)
	{
		case '+':c=a+b;
				printf("\n%d",c);
				break;
		case '-':d=a-b;
				printf("\n%d",d);
				break;
		case '*':e=a*b;
				printf("\n%d",e);
				break;
		case '/':f=a/b;
				printf("\n%d",f);
				break;
		default:printf("Enter Valid Input");
	}
}

