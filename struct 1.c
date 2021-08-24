
#include<stdio.h>
#include<string.h>

struct user
{
	int roll_no;
	char Name[10];
	float Marks;
};

int main()
{

	struct user s1,s2,s3;
	
	printf("\nstudents-1 roll_no,name,marks: ");
	scanf("%d %s %f",&s1.roll_no,&s1.Name,&s1.Marks);

	
	printf("\nstudents-2 roll_no,name,marks: ");
	scanf("%d %s %f",&s2.roll_no,&s2.Name,&s2.Marks);
	
	printf("\nstudents-3 roll_no,name,marks: ");
	scanf("%d %s %f",&s3.roll_no,&s3.Name,&s3.Marks);
	
	printf("\nStudent List: \n\n");
	printf("Student-1: %d %s %f\n",s1.roll_no,s1.Name,s1.Marks);
	printf("Student-2: %d %s %f\n",s2.roll_no,s2.Name,s2.Marks);
	printf("Student-3: %d %s %f\n",s3.roll_no,s3.Name,s3.Marks);
}


