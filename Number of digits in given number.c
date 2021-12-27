#include <stdio.h>
int main() {
  int x,i=1,a,st=0,new;
  printf("Enter the N:");
  scanf("%d",&x);
  while(i<=x)
  {
   new=x%10;
   if(new<10)
   {
     st++;
   }
   x=x/10;
}
printf("Number of Digits in Given Number : %d",st);
}
