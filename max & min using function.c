#include <stdio.h>
void cal(int x ,int y);
int main() {
  cal(65,75);
  return 0;
}
void cal(int x, int y)
{
  if(x>y)
  {
    printf("%d is max\n",x);
    printf("%d is min\n",y);
  }
  else
  {
    printf("%d is max\n",y);
    printf("%d is min\n",x);
  
  }
}
