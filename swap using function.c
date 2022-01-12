#include <stdio.h>
void swap(int a, int b);
int main(void) {
  
  swap(1,2);
  return 0;
}
void swap(int a, int b)
{
  int c;
  c=b,b=a,a=c;
  printf("a is %d\n",a);
  printf("b is %d",b);
}