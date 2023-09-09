#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int alphs = '0';

	while (alphs <= '9')
	{
		putchar(alphs);
		alphs++;
	}
	putchar('\n');
	return (0);
}
