#include "main.h"
/**
 * print_square - function that prints a square
 *
 * @size: size of the square
 *
 * Description: If size is 0 or less, print only a new line
 * use #  to print the square
 *
 */
void print_square(int size)
{
	int a, b;

	b = 0;
	if (size < 1)
		_putchar('\n');
	while (b < size)
	{
		a = 0;
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		b++;
	}
}
