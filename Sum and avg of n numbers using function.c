#include <stdio.h>
void cal(int* ,int* ,int*);
int main(void) {
  int a,b=0,c=0;
  scanf("%d",&a);
  cal(&a,&b,&c);
  printf("Sum of n numbers: %d\n",b);
  printf("Avg of n numbers: %d\n",c);
  return 0;
}
void cal(int *n ,int *sum,int *avg)
{
  int i,c;
  for(i=1;i<=*n;i++)
  {
   scanf("%d",&c);
    *sum+=c;
  } 
  *avg=*sum/(*n);
  
}