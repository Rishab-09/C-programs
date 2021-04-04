#include<stdio.h>
int main()
{
	int i, start;
	start:
	printf("\nEnter Marks: ");	//accepting value from users
	scanf("%d",&i);		//storing the value
	//condition
	if(i>=85 && i<=100)
	{
		printf("Grade A");
	}
	else if(i>=70 && i<=84)
	{
		printf("Grade B");
	}
	else if(i>=55 && i<=69)
	{
		printf("Grade C");
	}
	else if(i>=40 && i<=54)
	{
		printf("Grade D");
	}
	else if(i>=0 && i<=39)
	{
		printf("Grade F");
	}
	else
	{
		printf("Invalid Input");
	}
	goto start;
}
