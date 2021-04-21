
#include<stdio.h>

int main()
{
	
	FILE *fp;
	
	fp = fopen("Test.txt","w");
	fprintf(fp,"Hello myself Rishab\n");
	fputs("Nice to meet you\n",fp);
	fputs("May I Know Your Name",fp);
	fclose(fp);
}
