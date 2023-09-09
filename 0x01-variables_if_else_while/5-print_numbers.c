#include <stdio.h>
/**
 * main - Entry point
 *
 * description: prints all single digit nums of base 10 starting from 0
 *
 * Return: (0) (success)
 *
 */
int main(void)
{
	int base_x = '0';

	while (base_x <= '9')
	{
		putchar(base_x);
		base_x++;
	}
	putchar('\n');
	return (0);
}
