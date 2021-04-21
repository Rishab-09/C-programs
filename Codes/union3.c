
#include<stdio.h>
#include<string.h>

union Data
{
	int i;
	float f;
	char str[20];
};

int main()
{
	union Data d;
	
	printf("Memory Size: %d",sizeof(d));
}
