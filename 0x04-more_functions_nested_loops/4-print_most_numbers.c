#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Return: 0 (success)
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 50)
		{
			if (a != 52)
			{
				_putchar(a);
			}
		}
	}
	_putchar('\n');
}
