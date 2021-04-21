#include<stdio.h>


void getnum()
{
	int a ,b,result;
	printf("\nEnter the value:");
	scanf("%d",&a);
	printf("\nEnter the value:");
	scanf("%d",&b);
}

void Perimeter()
{
	int a,b,result;
	result=(a+b)+(b+a);
	printf("\n");
	printf("\n Perimeter is: %d",result);
}

void Area()
{
	int a,b,result;
	result=a*b;
	printf("\n");
	printf("\n Area is: %d",result);
}

int main()
{
	getnum();
	Perimeter();
	Area();
}
