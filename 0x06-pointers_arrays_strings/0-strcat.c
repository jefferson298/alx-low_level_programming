#include "main.h"
/**
 * _strcat -  function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * @dest: value of the input
 * @src: alternate input  value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
