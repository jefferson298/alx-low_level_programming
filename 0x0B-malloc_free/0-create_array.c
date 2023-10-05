#include "main.h"
#include <stdlib.h>
/**
 * create_array - This create array of size size and assign char c
 * @size: The size of array
 * @c: character to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int g;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; g < size; i++)
		str[g] = c;
	return (str);
}
