#include<stdio.h>


void display()
{
	int i,num=12,multi;

	
	for(i=0;i<=10;i++)
	{
		multi=num*i;
		printf("%d * %d = %d\n",num,i,multi);
	}
	display();
}

int main()
{
	
	display();
}

	
