#include<stdio.h>

void main()
{
	int month,start;
	start:
	printf("\n");
	printf("\nEnter month:");
	scanf("%d",&month);
	
	switch(month)
	{
		case (1):
			printf("First month is January");
			break;
			
		case(2):
			printf("Second month is February");
			break;
			
		case(3):
			printf("Third month is March");
			break;
			
		case(4):
			printf("Fourth month is April");
			break;
			
		case(5):
			printf("Fifth month is May");
			break;
			
		case(6):
			printf("Sixth month is June");
			break;
			
		case(7):
			printf("Seventh month is July");
			break;
			
		case(8):
			printf("Eighth month is August");
			break;
			
		case(9):
			printf("Ninth month is September");
			break;
			
		case(10):
			printf("Tenth month is October");
			break;
			
		case(11):
			printf("Eleventh month is November");
			break;
			
		case(12):
			printf("Last month is December");
			break;
			
		default:
			printf("Invalid Input");
			break;		
	}
	goto start;
}
