#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point for the codes
 *
 * Description: To check the value of some random numbers
 *
 * Return: (0) value Success
 */
int main(void)
{
	int n;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* Gives the real signs of random num generated */
	if(n < 0)
        {
                printf("is negative\n");
	}
          else if(n == 0)
          {
          	printf("is zero\n");
          }
          else
          {
		printf("is positive\n");
          }				
	return (0);
}
