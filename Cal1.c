#include<stdio.h>
int main()
{
	int a, b, result,cal;
	
	printf("Enter value a: ");
	scanf("%d",&a);
	printf("Enter value b: ");
	scanf("%d",&b);
	
	printf("\n1.ADD \n2.SUB \n3.MUL \n4.DIV \n5.AVG");
	
	printf("\n\nEnter your choice: ");
	scanf("%d",&cal);
	
	switch(cal)
	{
		case 1:
			result = a + b;
			printf("Addition: %d",result);
			break;
		
		case 2:
			result = a - b;
			printf("Subtraction: %d",result);
			break;
			
		case 3:
			result = a * b;
			printf("Multiplication: %d",result);
			break;
		
		case 4:
			result = a / b;
			printf("Division: %d",result);
			break;
			
		case 5:
			result = a + b;
			printf("Average: %d",result/2);
			break;
	}
	
}
