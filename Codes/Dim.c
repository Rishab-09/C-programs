
#include<stdio.h>

int main()
{
	int i,j;
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	printf("Three Dimensional array:\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",arr[i][j]);
		}
			printf("\n");		
	}	
}
