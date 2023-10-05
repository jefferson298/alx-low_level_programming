#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - This code duplicates to new memory space location
 * @str: The char
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	char *ddd;
	int c, r = 0;

	if (str == NULL)
		return (NULL);
	c = 0;
	while (str[c] != '\0')
		c++;

	ddd = malloc(sizeof(char) * (c + 1));

	if (ddd == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ddd[r] = str[r];

	return (ddd);
}
