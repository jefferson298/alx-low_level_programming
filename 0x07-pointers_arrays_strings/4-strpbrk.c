#include "main.h"
/**
 * _strpbrk -  function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: A string
 * @accept: Second String
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
