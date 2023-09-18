#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: The String
 *
 * Return: length (success)
 */
int _strlen(char *s)
{
	int li = 0;

	while (*s != '\0')
	{
		li++;
		s++;
	}
	return (li);
}
