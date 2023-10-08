#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - function that Allocates memory using malloc
 * @b: number of bytes
 *
 * Return: This returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);

	if (point == NULL)
		exit(98);

	return (point);
}
