
// switch

#include<stdio.h>

int main()
{
	int a,b,result,num,start;
	start:
	printf("\n");
	printf("\n1.add,2.sub,3.mult,4,div");
	printf("\nEnter your choice:");
	scanf("%d",&num);
	printf("\nEnter the two numbers:",a,b);
	scanf("%d""%d",&a,&b);
	
	switch(num)
	{
		case (1):
			result= a + b;
			printf("adition of two number is %d:",result);
			break;
		case (2):
			result = a - b;
			printf("subtraction of two number is %d",result);
			break;			
			
		case(3):
			result= a * b;
			printf("multiplication of two number is %d",result);
			break;
		case(4):
			result= a / b;
			printf("division of two number is %d",result);
			break;
		default:
			printf("input is invalid");
			break;
			
	}
	goto start;
}

