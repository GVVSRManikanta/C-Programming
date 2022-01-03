#include<stdio.h>
int main()
{
	double j=0.55,*l;
	l=&j;
	printf("j:%p",l);
	printf("\nj:%lld",l);
	printf("\nj:%lf",*l);
}
