
#include<stdio.h>

int main()
{
	int rishab[5],array[5],i;
	rishab[0] = 10;
	rishab[1] = 20;
	rishab[2] = 30;
	rishab[3] = 40;
	rishab[4] = 50;
	
	for(i=0;i<=4;i++)
	{
		printf("\n rishab[%d]= %d",i,rishab[i]);
	}
	for(i=0;i<=4;i++)
	{
		array[i]=rishab[i];
		printf("\n array[%d] = %d",i,array[i]);
	}
	
}
