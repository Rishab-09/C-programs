
// count

#include<stdio.h>

int main()
{
	int i,num,start;
	start:
	printf("\n Enter your Number: ");
	scanf("%d",&num);
	
	do
	{
		num=num/10;
		i=i+1;	
	}
	while(num!=0);
	
printf(" No.of digits in given number is: %d",i);	
printf("\n");
goto start;
}
