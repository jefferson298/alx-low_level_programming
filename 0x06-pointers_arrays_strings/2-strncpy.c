#include "main.h"
/**
 * _strncpy - To copy a string
 * @dest: First input value
 * @src: The second input value
 * @n: int input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int w;

	w = 0;
	while (w < n && src[j] != '\0')
	{
		dest[w] = src[w];
		j++;
	}
	while (w < n)
	{
		dest[w] = '\0';
		w++;
	}

	return (dest);
}
