#include <stdio.h>

int main(void) {
  int n,r,pr=1;
  printf("Enter the numebr : ");
  scanf("%d",&n);
  for(;n>0;n=n/10)
  {
    r=n%10;
    pr=pr*r;
  }
  printf("Product of digits in num : %d",pr);
  return 0;
}