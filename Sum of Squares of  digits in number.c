#include <stdio.h>

int main(void) {
  int n,r,s=0;
  printf("Enter the numebr : ");
  scanf("%d",&n);
  for(;n>0;n=n/10)
  {
    r=n%10;
    s=s+r*r;
  }
  printf("Sum of squares of digits in num : %d",s);
  return 0;
}