
//Even and Odd

#include<stdio.h>

void main()
{
	int num,start;
	start:
	printf("\n Enter the Number: ");
	scanf("%d", &num);

	if(num % 2 == 0)
	{

		printf("%d is Even Number",num);
		goto start;
		
	}
	
	else
	{
		printf("%d is Odd Number",num);
		goto start;
			
	}

}
