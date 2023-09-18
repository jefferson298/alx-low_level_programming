#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line.
 * @str: The string input
 *
 * Return: 0 (success)
 */
void puts2(char *str)
{
	int li = 0;
	int a = 0;
char *b = str;
int c;

while (*b != '\0')
{
	b++;
	li++;
}
a = li - 1;
for (c = 0; c <= a; c++)
{
	if (c % 2 == 0)
	{
		_putchar(str[c]);
	}
}
_putchar('\n');
}
