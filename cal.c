
#include<stdio.h>


void getnum()
{
	int a ,b,result;
	printf("\nEnter the value:");
	scanf("%d",&a);
	printf("\nEnter the value:");
	scanf("%d",&b);
}

void add()
{
	int a,b,result;
	result=a+b;
	printf("\n");
	printf("\n Addition is: %d",result);
}

void sub()
{
	int a,b,result;
	result=a-b;
	printf("\n");
	printf("\n Subtraction is: %d",result);
}

void mul()
{
	int a,b,result;
	result=a*b;
	printf("\n");
	printf("\n Multiply is: %d",result);
}

void div()
{
	int a,b,result;
	result=a/b;
	printf("\n");
	printf("\n Division is: %d",result);
}

void avg()
{
	int a,b,result;
	result=a+b;
	printf("\n");
	printf("\n Average is: %d",result/2);
}



int main()
{
	getnum();
	add();
	sub();
	mul();
	div();	
	avg();
}
