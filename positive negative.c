
// positive or negative

#include<stdio.h>

void main()
{
	int value,start;
	start:
	printf("\n Enter the Number: ");
	scanf("%d",&value);
			
	if(value>0)
	{
		printf("Number is Positive", value);
		goto start;
		
	}
	else if(value<0)
	{
		printf("Number is Negative", value);
		goto start;
	}
	else
	{
		printf("Number is zero", value);
		goto start;

	}
	
	
}
