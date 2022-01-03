#include<stdio.h>
int main()
{
	int *i=50,*j=95,*m;
	m=&i,i=&j;
	printf("i:%d \nj:%d",*i,*j);
}
