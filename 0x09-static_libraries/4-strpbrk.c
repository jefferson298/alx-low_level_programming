#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input1
 * Return: 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
		if (*s == accept[g])
		return (s);
		}
	s++;
	}

return ('\0');
}
