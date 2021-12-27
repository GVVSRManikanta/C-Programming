#include <stdio.h>
int main(void) 
{
  int n,i,x,y;
  printf("Enter the N:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   printf("Enter the num:");
   scanf("%d",&x);
   if(x%2==0)
   {
     printf("%d is even\n",x);
   }
  }
}