#include "main.h"
/**
 * _strncat -it  concatenate two strings
 * It uses at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: The input value
 * @src: Alternate input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (d < n && src[d] != '\0')
	{
	dest[c] = src[d];
	c++;
	d++;
	}
	dest[c] = '\0';
	return (dest);
}
