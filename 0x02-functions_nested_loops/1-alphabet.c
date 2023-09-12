#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints the alphabet, in lowercase
 *
 * Return: 0 (success)
 *
 */
void print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
