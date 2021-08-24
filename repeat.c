
#include<stdio.h>

int main()
{
	int i,n,array[n],a[i],count=0;
	printf("Enter Size of Array:");
	scanf("%d",&n);
	
	printf("\n");
	for(i=1;i<=n;i++)
	{
 		printf("Enter the value:");
		scanf("%d",&a[i]);
		count++;
	}
	printf("count of given array is: %d",count);
}

