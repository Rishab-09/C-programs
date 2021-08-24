
#include<stdio.h>

int main()
{
	
	int i,j,a,b,array[100][100];
	int arr[i][j];
	printf("Enter Size:",a,b);
	scanf("%d%d",&a,&b);
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("Enter the Value: ");
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\nMatrix:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" %d ",arr[i][j]);
		}
			printf("\n");	
	}
}
