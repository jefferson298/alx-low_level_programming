#include "main.h"
/**
 * _memset - This fills a block of memory with a given value
 * @s: char 1
 * @b: char 2
 * @n: This is the number of bytes changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
