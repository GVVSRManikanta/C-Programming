//Finding min of three numbers
#include<stdio.h>
main()
{
	int a,b,c;
  printf("a:");
  scanf("%d",&a);
  printf("\nb:");
  scanf("\n%d",&b);
  printf("\nc:");
  scanf("\n%d",&c);
  if(a<b && a<c)
  printf("\na is min");
  if(b<a && b<c)
  printf("\nb is min");
  if(c<a && c<b)
  printf("\nc is min");
  return 0;
}
