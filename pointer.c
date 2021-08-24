
#include<stdio.h>

int main()
{
	int *p,a,*b;
	
	a = 20;
	printf("\n Address of a: %p",&a);
	printf("\n content of a: %d",a);
	
	p = &a;
	printf("\n Address of a: %p",&p);
	printf("\n Content of a: %d",*p);
	
	a = 30;
	printf("\n Address of a: %p",&a);
	printf("\n Content of a: %d",a);
	
	*p = 5;
	printf("\n Address of a: %p",&a);
	printf("\n Address of a: %d",a);
	
	b = &a;
	*b = 50;
	printf("\n Address of a: %p",&b);
	printf("\n Address of a: %d",a);
}
