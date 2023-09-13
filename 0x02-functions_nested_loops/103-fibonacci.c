#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:  finds and prints the sum of the even-valued terms
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	long int n, a = 1, b = 2, sums = 0, totsum = 0;

	for (n = 0; n < 49; n++)
	{
		if ((b % 2 == 0) && (b <= 4000000))
		{
			totsum = totsum + b;
		}
		sums = a + b;
		a = b;
		b = sums;
	}
	printf("%ld\n", totsum);
	return (0);
}
