
#include<stdio.h>

int main()
{
	int i,array[5],sum=0,count=0;

	for(i=1;i<=5;i++)
	{
	printf("Enter a value:");
	scanf("%d",&array[i]);
	}
	
		for(i=1;i<=5;i++)
		{
			printf("\n");
			printf("%d",array[i]);
			count++;
		}
						printf("\n Count of given array is = %d",count);

			for(i=1;i<=5;i++)
			{
				sum+=array[i];
			}
	
			printf("\n Addition is = %d",sum);
			
			printf("\n Average is = %d",sum/5);
	
		
}
