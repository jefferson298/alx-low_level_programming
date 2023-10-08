#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - This  concatenates two strings
 * @s1: string 1 to
 * @s2: string 2 from
 * @n: Total number of bytes from s2 to concatenate to s1
 *
 * Return: This returns the pointer to the string value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int g = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (g < len1)
	{
		s[g] = s1[g];
		g++;
	}

	while (n < len2 && g < (len1 + n))
		s[g++] = s2[j++];
	while (n >= len2 && g < (len1 + len2))
		s[g++] = s2[j++];

	s[g] = '\0';

	return (s);
}
