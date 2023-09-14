#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: finds and prints largest prime 
 * factor of the number 612852475143
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	long pri = 612852475143, divi;

	while (divi < (pri / 2))
	{
		if (( pri % 2) == 0)
		{
			pri /= 2;
			continue;
		}
		for (divi = 3; divi < (pri / 2); divi += 2)
		{
			if (( pri % divi) == 0)
				pri /= divi;
		}
	}
	printf("%ld\n", pri);
		return (0);
}
