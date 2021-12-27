#include <stdio.h>
int main() {
  int x,i=1,a,pr=1,new;
  printf("Enter the N:");
  scanf("%d",&x);
  do
  {
   new=x%10;
   if(new%2!=0)
   {
     pr=pr*new;
   }
   x=x/10;
}
while(i<=x);
printf("Product of Odd Numbers in Given Number: %d",pr);
}