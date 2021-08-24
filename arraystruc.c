
#include<stdio.h>
#include<string.h>

struct user
{
	int roll_no;
	char Name[10];
	int Marks;
};

int main()
{
	int i;
	struct user a[5];
	for(i=0;i<5;i++)
	{
		printf("\nstudents roll no: ");
		scanf("%d",&a[i].roll_no);
	
		printf("students Name: ");
		scanf("%s",&a[i].Name);
	
	
		printf("students Marks: ");
		scanf("%d",&a[i].Marks);
	}
	
	printf("\nStudent list: \n\n");
	for(i=0;i<5;i++)
	{
		
		printf("%d %s %d%\n",a[i].roll_no,a[i].Name,a[i].Marks);
	}
	
}


