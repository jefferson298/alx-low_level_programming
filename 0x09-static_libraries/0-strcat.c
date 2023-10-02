#include "main.h"
/**
 * _strcat - This concatenates two strings
 * @dest: First input value
 * @src: second input value
 *
 * Return: it is void
 */
char *_strcat(char *dest, char *src)
{
	int k;
	int j;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[k] = src[j];
		k++;
		j++;
	}

	dest[k] = '\0';
	return (dest);
}
