
#include<stdio.h>

int main()
{
	int num,i,n1=0,n2=1,n3,start;
	start:
	printf("\n Enter the number:");
	scanf("%d",&num);
	printf("\n%d\n%d",n1,n2);
	
	for(i=2;i<num;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("\n%d",n3);
	}
	goto start;
}
