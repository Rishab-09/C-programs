
#include<stdio.h>
#include<string.h>

union Data
{
	int i;
	float f;
	char str[20];
};

int main()
{
	union Data d;
	d.i = 10;
	printf("\n Data i: %d",d.i);
	
	d.f = 25.5;
	printf("\n Data f: %f",d.f);
	
	strcpy(d.str,"C-Programming");
	printf("\n Data c: %s",d.str);
}
