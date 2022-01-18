#include <stdio.h>
void cal(int*,int*,int*,int*,int*);
int main() {
  int a,b,c,d,e;
  scanf("%d%d",&a,&b);
  cal(&a,&b,&c,&d,&e);
  return 0;
}
void cal(int *x, int *y,int *z,int*n ,int *m)
{
  *z=*x+*y;
  *n=*x-*y;
  *m=*x**y;
  printf("sum of Num :%d\n",*z);
  printf("Diff of Num :%d\n",*n);
  printf("Pr of Num :%d\n",*m);
}