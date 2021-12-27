#include <stdio.h>

int main(void) {
  char x=65,y=97;
  while(x<=90)
  {
    printf("Upper Case:%c\n",x);
    x++;
  }
  while(y<=122)
  {
    printf("Lower Case:%c\n",y);
    y++;
  }

  return 0;
}