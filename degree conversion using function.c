#include <stdio.h>

float cel(float f)
{
  float cel;
  cel=(f-32)*5/9;
  return cel;
}

int main() {
  float f,c;
  printf("Enter the Farenheit:");
  scanf("%f",&f);
  c=cel(f);
  printf("Value in Centigrate : %.1f",c);
  return 0;
}
