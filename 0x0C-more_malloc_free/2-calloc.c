#include <stdlib.h>
#include "main.h"
/**
 * *_memset - This fills the memory with a constant byte
 * @s: memory to be filled
 * @b: The char to copy
 * @n: The number of times to copy char b
 *
 * Return: The pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}

/**
 * *_calloc - This allocates a memory for an array
 * @nmemb: Total number of elements in the array
 * @size: The size of each element
 *
 * Return: The pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;

	if (nmemb == 0 || size == 0)
		return (NULL);

	point = malloc(size * nmemb);
	if (point == NULL)
		return (NULL);

	_memset(point, 0, nmemb * size);

	return (point);
}
