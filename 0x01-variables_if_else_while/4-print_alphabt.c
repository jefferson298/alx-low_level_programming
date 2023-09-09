#include <stdio.h>
/**
 * main - prints all letters except q and e
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
