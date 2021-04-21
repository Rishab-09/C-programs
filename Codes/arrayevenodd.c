
#include<stdio.h>

int main()
{
	int i,arr[100],num;
	
	printf("Enter Array Size: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		printf("Enter Value: ");
		scanf("%d",&arr[i]);
	}

	for(i=1;i<=num;i++)
	{
		if(arr[i]%2==0)
		{
			printf("\nEven Numbers: %d ",arr[i]);
		}
		else
		{
			printf("\nOdd Numbers: %d ",arr[i]);
		}
	}

}

