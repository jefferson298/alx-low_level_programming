#include "main.h"
/**
 * _pow - functions that calculates power of base
 * @base: base
 * @power: The power of the exponent
 *
 * Return: value of base power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int g;

	num = 1;
	for (g = 1; g <= power; g++)
		num *= base;
	return (num);
}

/**
 * print_binary - Function prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, check;
	char flag;

	flag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		check = n & div;
		if (check == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
