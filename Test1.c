
#include<stdio.h>

int main()
{
	FILE *fp;
	char buff[200];
	
	fp = fopen("Test.txt","r");
	fscanf(fp,"%s",buff);
	printf("%s",buff);
	
	fgets(buff, 200, (FILE*)fp);
	printf("%s",buff);
	
}
