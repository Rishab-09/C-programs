
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
	d.f = 25.5;
	strcpy(d.str,"C-Programming");
	
	printf("\n Data i: %d",d.i);
	printf("\n Data f: %f",d.f);
	printf("\n Data c: %s",d.str);
}
