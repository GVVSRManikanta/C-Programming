#include <stdio.h>
void cal(int* ,int*);
int main() {
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  cal(&a,&b);
  return 0;
}
void cal(int *x, int *y)
{
  if(*x>*y)
  {
    printf("%d is max\n",*x);
    printf("%d is min\n",*y);
  }
  else
  {
    printf("%d is max\n",*y);
    printf("%d is min\n",*x);
  
  }
}
