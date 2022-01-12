#include <stdio.h>

void year(int a);

int main()
{
  int x;
  printf("Enter the year :");
  scanf("%d",&x);
  year(x);
}
void year(int a)
{
if(a%4==0)
printf("Leap Year");
else
printf("Not Leap Year");
}