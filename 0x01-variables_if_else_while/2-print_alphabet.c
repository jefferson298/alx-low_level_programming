#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase using putchar
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar (i);
		i++;
	}
	putchar('\n');
	return (0);
}
