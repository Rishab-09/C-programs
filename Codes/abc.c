#include<stdio.h>

int main()
{
	int i,j,k,n,m,p,a[i],b[j],c[i];
	printf("Enter Size of Array:");
	scanf("%d",&n);

	printf("\n");
	for(i=0;i<=n;i++)
	{
 		printf("Enter the value of array1:");
		scanf("%d",&a[i]);
	}

	printf("\n");
	printf("Enter Size of Array:");
	scanf("%d",&m);
	
	for(j=0;j<=m;j++)
	{
 		printf("Enter the value of array2:");
		scanf("%d",&b[j]);
	}
	p=n+m;

	for(i=0;i<=n;i++)
	{
			c[i]=a[i];
	}
	
	for(j=0;j<=m;j++)
	{
			c[i]=b[j];
			i++;
	}
	for(i=0;i<=p;i++)
	{
		printf("%d ",c[i]);
	}
	
}
