#include<stdio.h>
int main()
{
	float a,b,q,r;
	scanf("%f",&a);
	scanf("\n%f",&b);
	q=a/b;
	r=b-a*q;
	printf("%f\n%f",q,r);
}
