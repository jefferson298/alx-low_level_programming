#include "main.h"
/**
 * print_rev -  prints a string, in reverse followed by a new line
 * @s: The string to be printed
 *
 * Return : 0 (success)
 */
void print_rev(char *s)
{
	int Li = 0;
	int a;

	while (*s != '\0')
	{
		Li++;
		s++;
	}
	s--;
	for (a = Li; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
