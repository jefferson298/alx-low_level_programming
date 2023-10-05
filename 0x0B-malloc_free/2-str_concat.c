#include "main.h"
#include <stdlib.h>
/**
 * str_concat - This gets ends of input and add together for size
 * @s1: input 1
 * @s2: input 2
 * Return: The concatenates of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int b, ctb;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ctb = 0;
	while (s1[b] != '\0')
		b++;
	while (s2[ctb] != '\0')
		ctb++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	b = ctb = 0;
	while (s1[b] != '\0')
	{
		conct[b] = s1[b];
		b++;
	}

	while (s2[ctb] != '\0')
	{
		conct[b] = s2[ctb];
		b++, ctb++;
			}
	conct[b] = '\0';
	return (conct);
}
