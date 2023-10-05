#include "main.h"
#include <stdlib.h>
/**
 * create_array - This create array of size size and assign char c
 * @size: The size of array
 * @c: character to assign
 * Description: This creates an array of size size and assign char c
 * Return: pointer to array, do nothing if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int g;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (g = 0; g < size; g++)
		str[g] = c;
	return (str);
}
