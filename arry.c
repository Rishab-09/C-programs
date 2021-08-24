
// even-odd

#include<stdio.h>

int main()
{
	int i,n,array[100];
	printf("Enter Size of Array:");
	scanf("%d",&n);
	
	printf("\n");
	for(i=0;i<n;i++)
	{
 		printf("Enter the value:");
		scanf("%d",&array[i]);
	}

	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		printf("%d",array[i]);
	}
	
	printf("\nEven Number: ");
	for(i=0;i<n;i++)
	{
		if(array[i]%2==0)
		{
			printf(" %d ",array[i]);	
		}
	}
		
	printf("\nOdd Number: ");
	for(i=0;i<n;i++)
	{
		if(array[i]%2!=0)
		{
			printf(" %d ",array[i]);	
		}
		
	}
}
