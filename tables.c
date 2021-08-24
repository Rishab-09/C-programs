
#include<stdio.h>

void Table()
{
	int i,num,mult,start;
	start:
	printf("\n Enter value: ");
	scanf("%d",&num);
	
	printf("\n");
	for(i=1;i<=10;i++)
	{
		mult=num*i;
		printf("%d * %d = %d\n",num,i,mult );
	}
	goto start;
}

int main()
{
	Table();
}
