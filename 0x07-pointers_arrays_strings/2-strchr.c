#include "main.h"
/**
 * _strchr - Standard library function
 * @s: First String
 * @c: given character
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
