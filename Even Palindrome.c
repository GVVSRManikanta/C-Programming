#include<stdio.h>
int main()
{
	int n,s=0,r,x;
	printf("Enter the n:");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=(n/10);
	}
  if(x%2==0){
  if(s==x)
  printf("Even Palindrome");
  else
  printf("Even but not Palindrome");
  }
  else
  {
  if(s==x)
  printf("odd Palindrome");
  else 
  printf("odd but not Palindrome");
  }
}