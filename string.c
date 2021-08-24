
#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	printf("Enter String: ");
	gets(str);
	printf("\n String is: %s",str);
	printf("\n Upper String is: %s",strupr(str)); 
	
	printf("\n");
	printf("\n Enter String: ");
	gets(str);
	printf("\n String is: %s",str);
	printf("\n Lower String is: %s",strlwr(str));
	
	printf("\n"); 
	printf("\n Enter String: ");
	gets(str);
	printf("\n String is: %s",str);
	printf("\n Reverse String is: %s",strrev(str));
	
}

