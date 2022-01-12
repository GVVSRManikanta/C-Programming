#include <stdio.h>
void gcd(int a, int b)
{
  int i;
  for(i=1;i<=a*b;i++)
  {
    if(i%a==0 && i%b==0)
    {
       printf("Gcd is %d",(a*b)/i);
        break;
    }
  }
 
}

int main(void) 
{
  gcd(2,4);
  return 0;
}