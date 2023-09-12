#include "main.h"
/**
 * print_sign - to print value sign
 * Description: for n conditions
 * @n: The n value
 *
 * Return: (0) or (1) mostly
 *
 */
int print_sign(int n)
{
	int neg = -1;
	char chr = (char) neg;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (chr);
	}
}
