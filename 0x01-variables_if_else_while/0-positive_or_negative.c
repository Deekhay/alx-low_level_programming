#include <stdio.h>
/**
 * main - entry point
 * Return: 0 after printing the function
 */
int main(void)
{
	      int x;

	      srand(time(0));
	      x = rand()  - RAND_MAX / 2;

		 printf("%d \n", x);

				  
			 if (x > 0)
		         {
			 printf("The number is positive \n");
			 }
			 else if (x < 0)
			 {
		            printf("The number is negative \n");
			      }
			   else
			     {
				 printf("The number is zero \n");
				 }
			         return (0);
}
