//Checking Vowels
#include<stdio.h>
main()
{
	char a;
	printf("Enter the Char:");
	scanf("%c",&a);
	if(a=='a' | a=='e' | a=='i' | a=='o' | a=='u')
	{
		printf("Vowel");
	}
	else
	{
		printf("consonant");
	}
}
