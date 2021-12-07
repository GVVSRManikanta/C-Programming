//Finding whether getting profit or loss
#include<stdio.h>
main()
{
	int cp,sp,p;
	printf("cp:");
	scanf("%d",&cp);
	printf("sp:");
	scanf("%d",&sp);
	if(sp>cp)
	{
		printf("profit :");
		p=sp-cp;
		printf("%d",p);
	}
	else
	{
		printf("loss : ");
		p=sp-cp;
		printf("%d",p);
	}
}
