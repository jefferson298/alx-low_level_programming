#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: Beginning address of the memory to be filled
 * @b: The required value
 * @n: Total num of size in bytes for changing
 *
 * Return: a pointer to the memory area s
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
