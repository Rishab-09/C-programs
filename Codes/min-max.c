
// min-max 

#include<stdio.h>

int main()
{
	int i,num,max,min,array[100];
	printf("Enter Size of Array:");
	scanf("%d",&num);
	
	printf("\n");
	for(i=0;i<=num;i++)
	{
	
 		printf("Enter the value:");
		scanf("%d",&array[i]);
	}
	
	max=array[0];
	min=array[0];
	
	for(i=1;i<=num;i++)
	{
		if(array[i]>max)
		{
			max = array[i];
			
		}

		if(array[i]<min)
		{
			min = array[i];
			
		}
	}
	printf("\n Maximum Element = %d",max);
	printf("\n Minimum Element = %d",min);
}
