
#include<stdio.h>

int main()
{
	
	FILE *fp;
	
	fp = fopen("Test.txt","w");
	fprintf(fp,"Hello myself Rishab\n");

	fclose(fp);
}
