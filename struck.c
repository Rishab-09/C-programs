
#include<stdio.h>
#include<string.h>

struct
{
	int roll_no;
	char Name[10];
}
s1,s2,s3;

int main()
{
	s1.roll_no = 101;
	strcpy(s1.Name,"Rishab");

	
	s2.roll_no = 102;
	strcpy(s2.Name,"Parth");
	

	
	s3.roll_no = 103;
	strcpy(s3.Name,"Neha");
	
	printf("\n Student-1 : %d %s",s1.roll_no,s1.Name);
	printf("\n Student-2 : %d %s",s2.roll_no,s2.Name);
	printf("\n Student-3 : %d %s",s3.roll_no,s3.Name);

	
	
	
	
}

