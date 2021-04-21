
#include<stdio.h>

int main()
{
	int i,j;
	int arr[3][3];
	
	printf("Enter the Value: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("Values are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\n",arr[i][j]);
		}
	}

	printf("\nMatrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",arr[i][j]);
		}
			printf("\n");	
	}
}
