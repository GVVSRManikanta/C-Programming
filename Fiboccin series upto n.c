//fibonacc
#include <stdio.h>

int main(void) {
  int a=0,b=1,c,n;
  printf("a=%d\nb=%d\n",a,b);
  printf("Enter the n:");
  scanf("%d",&n);
  while(c<= n)
  {
  c=a+b;
  printf("%d\n",c);
  printf("Fibonacci series:");
  a=b,b=c;
  }
  return 0;
}