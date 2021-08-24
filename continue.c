
//continue

#include <stdio.h>

void main() 
{
   int i;
   double num, sum = 0.0;

   for (i = 1; i <= 10; i++)
    {
      printf("Enter a N%d: ", i);
      scanf("%lf", &num);

      if (num < 0.0) 
	  {
    	continue;
      }

      sum += num; // sum = sum + number;
    }

   printf("Sum = %.2lf", sum);

}
