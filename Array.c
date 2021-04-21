
#include<stdio.h>

int main()
{
	int i,j,sum=0,result=0;
	int arr[3][3];
	
	printf("Enter the elements: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("Elements are:\n");
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
	
	for (i = 0; i < 3; ++i) 
    {
        sum = sum + arr[i][i];
        result = result + arr[i][3 - i - 1];
    }
 
        printf("\nThe sum of the diagonal elements is = %d\n",sum);
        printf("The sum of the off diagonal elements is   = %d\n", result);
 
}
