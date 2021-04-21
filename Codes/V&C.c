
// vowels and consonants

#include<stdio.h>

void main()
{
	int small_vowels,capital_vowels;
	char ch;
	printf("Enter the Character: ");
	scanf("%c",&ch);
	
	small_vowels=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
	capital_vowels=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');

	
	if(small_vowels||capital_vowels)
	{
		printf("%c is a vowel",ch);
	}
	else
	{
		printf("%c is a constant",ch);
	}
	
	
		
	
}
