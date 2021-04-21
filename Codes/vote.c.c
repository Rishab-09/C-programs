
#include<stdio.h>

void voting()
{
	int age,start;
	start:
	printf("\n Enter your age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf(" You are Eligible For Voting");
	}	
	else
	{
		printf(" You are Not Eligible For Voting");
	}
	printf("\n");
	goto start;

}

int main()
{
	voting();
}
