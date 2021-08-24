#include<stdio.h>

void main()
{

	char a,b,c,n;
	printf("Enter your choice:");
	scanf("%d",&n);
	
	a=(n=='Jan'||n=='Mar'||n=='May'||n=='July'||n=='Aug'||n=='Oct'||n=='Dec');
	
	b=(n=='April'||n=='June'||n=='sept'||n=='Nov');
	
	c=(n=='Feb');
	
	if(a||b)
	{
		printf("%d \n",n);
	}
}
