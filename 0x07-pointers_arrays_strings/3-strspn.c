#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: String
 * @accept: Harbors contents of s
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int d;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
			if (*s == accept[d])
			{
				a++;
				break;
			}
			else if (accept[d + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
