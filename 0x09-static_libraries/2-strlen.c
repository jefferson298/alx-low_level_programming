#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string given
 * Return: The length
 */
int _strlen(char *s)
{
	int g1 = 0;

	while (*s != '\0')
	{
		g1++;
		s++;
	}

	return (g1);
}
