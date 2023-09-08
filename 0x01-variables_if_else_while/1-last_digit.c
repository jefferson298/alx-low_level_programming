#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - Entry point
 *
 * Description: assigns a random number to n
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
int n;
int fdigit;
srand(time(0));
	n = rand() - RAND_MAX / 2;
	fdigit = n % 10;
	if (fdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, fdigit);
	}
	else if (fdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, fdigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, fdigit);
	}
	return (0);
}
