#include <stdio.h>
/**
 * main - Entry point
 *
 * prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	char alphs = 'z';

	while (alphs >= 'a')
	{
		putchar(alphs);
		alphs--;
	}
	putchar('\n');
	return (0);
}
