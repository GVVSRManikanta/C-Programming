#include <stdio.h>
int fact(int a);

int main() {
  int s,a;
  printf(" Enter the number:");
  scanf("%d",&a);
  s=fact(a);
  printf(" Factorial of %d : %d",a,s);
}

int fact(int a)
{
 int i,f=1;
  for(i=1;i<=a;i++)
  f=f*i;
return f;
}

