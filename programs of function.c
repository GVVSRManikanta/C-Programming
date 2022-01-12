#include <stdio.h>
/*void product(int a,int b, int c)
{
  int d=a*b*c;
  printf("%d",d);
}
int main(void) {
  product(2,3,4);
  return 0;
}*/

/*void max(int a,int b)
{
  int c;
  if(a>b)
  c=a;
  else
  c=b;
  printf("%d is max",c);
}
int main(void){
  max(2,3);
}*/

/*void check(int a)
{
  if(a%2==0)
  printf("%d is even",a);
  else
  printf("%d is odd",a);
}
int main(void){
  check(2);
}*/

/*void plus(int a,int b)
{
  int c=a+b;
  printf("\n%d",c);
}
void minus(int a,int b)
{
  int c=a-b;
  printf("\n%d",c);
}
void product(int a,int b)
{
  int c=a*b;
  printf("\n%d",c);
}
void by(float a,float b)
{
  float c=a/b;
  printf("\n%.1f",c);
}
int main(void) {
  product(2,3);
  plus(2,3);
  minus(1,2);
  by(5.0,2.0);
  return 0;
}*/

/*void interest(float p,float t,float r)
{
float s=(p*t*r)/100;
  printf("\n%.2f",s);
}
int main(void) {
  interest(2.0,3.0,4.0);
}*/

#include<stdio.h>

void x(int a,int b)
{
  int c,d,e;
  c=a+b;
  d=a-b;
  e=a*b;
 printf("%d\n",c);
  printf("%d\n",d);
  printf("%d\n",e);
}
void m(float x,float y)
 {
   float f=x/y;
   printf("%.1f\n",f);
 }
int main()
{
  x(5,6);
  m(5,6);
}