
#include <stdio.h>

int main()
{
    int n1, n2, max;
    printf("Enter value1: ");
    scanf("%d", &n1);
    printf("Enter value2: ");
    scanf("%d", &n2);

    // maximum number between n1 and n2 is stored in min
    max = (n1 > n2) ? n1 : n2;

    while (1)
	{
        if (max % n1 == 0 && max % n2 == 0) 
		{
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
