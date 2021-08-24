#include<stdio.h>
#include<string.h>

int main()
{
	int result;
	char str1[10]="abcd", str2[10]="AbCd",str3[10]="aBcD";
	
	result=strcmp(str1,str2);
	printf("\n Difference is: %d",result);
	
	result=strcmp(str1,str3);
	printf("\n Difference is: %d",result);

}

