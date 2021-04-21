#include<stdio.h>


void getnum()
{
	int r;
	float p=3.14,result;

	printf("\nEnter the value:");
	scanf("%d",&r);
}

void Area()
{
	int r;
	float p=3.14,result;
	result=p*r*r;
	printf("\n");
	printf("\n Area is: %f",result);
}

void Circumference()
{
	int r;
	float p=3.14,result;
	result=2*p*r;
	printf("\n");
	printf("\n Circumference is: %f",result);
}

int main()
{
	getnum();
	Area();
	Circumference();
}
