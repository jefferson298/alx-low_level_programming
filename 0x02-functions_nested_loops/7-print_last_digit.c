#include "main.h"
/**
 * print _last_digit - prints the last digit
 *
 * @b: Integer output
 * Description: Prints using _putchar
 *
 * Return: b last digit
 *
 */
int print_last_digit(int b)
{
	int i;

	if (b < 0)
	{
		i = -1 * (b % 10);
	}
	else
	{
		i = b % 10;
	}
	_putchar((i % 10) + '0');
	return (i % 10);
}
