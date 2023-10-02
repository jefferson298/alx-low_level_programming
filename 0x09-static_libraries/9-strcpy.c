#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copied to
 * @src: where its being duplicated from
 * Return: The string
 */
char *_strcpy(char *dest, char *src)
{
	int h = 0;
	int x = 0;

	while (*(src + h) != '\0')
	{
		h++;
	}
	for ( ; x < h ; x++)
	{
		dest[x] = src[x];
	}
	dest[h] = '\0';
	return (dest);
}
