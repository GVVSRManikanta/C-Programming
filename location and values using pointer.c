#include<stdio.h>
int main()
{
	int i=50,*m;
	float j=0.556,*l;
	char t=100,*k;
	m=&i,k=&t,l=&j;
	printf("i:%p \nj:%p \nt:%p",m,l,k);
	printf("\ni:%lld \nj:%lld \nt:%lld",m,l,k);
	printf("\ni:%d \nj:%f \nt:%c",*m,*l,*k);
}
