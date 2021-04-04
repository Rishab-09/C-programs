#include<stdio.h>
int main()
{
	int i;
	printf("Enter your choice:");
	scanf("%d",&i);
	
	switch(i)
	{
		case (1):
			printf("\nFood Item - Pizza");
			printf("\nPrice - Rs239");
			break;
		case (2):
			printf("\nFood Item - Burger");
			printf("\nPrice - Rs129");
			break;			
			
		case(3):
			printf("\nFood Item - Pizza");
			printf("\nPrice - Rs179");
			break;
		case(4):
			printf("\nFood Item - French Fries");
			printf("\nPrice - Rs99");
			break;
		case(5):
			printf("\nFood Item - Sandwich");
			printf("\nPrice - Rs149");
			break;
		case(6):
			printf("\nFood Item - Samosa");
			printf("\nPrice - Rs20");
			break;
		case(7):
			printf("\nFood Item - Softdrink");
			printf("\nPrice - Rs45");
			break;
		case(8):
			printf("\nFood Item - Vada Pav");
			printf("\nPrice - Rs15");
			break;
		case(9):
			printf("\nFood Item - Cold Coffee");
			printf("\nPrice - Rs55");
			break;
		case(10):
			printf("\nFood Item - Perry Perry Fries");
			printf("\nPrice - Rs80");
			break;
		default:
			printf("\nEnter a correct choice");
			break;		
	}
}

