#include <stdlib.h>
#include "main.h"
/**
 * count_word - function returns a pointer to an array of strings (words)
 * @s: The string to be evaluated
 *
 * Return: NULL if str == NULL or str == ""
 */
int count_word(char *s)
{
	int red, g, h;

	red = 0;
	h = 0;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] == ' ')
			red = 0;
		else if (red == 0)
		{
			red = 1;
			h++;
		}
	}

	return (h);
}
/**
 * **strtow - This splits The string into words
 * @str: The string to be split
 *
 * Return: This points to an array of strings (Success)
 * else NULL (Error)
 */
char **strtow(char *str)
{
	char **calc, *tmp;
	int d, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	calc = (char **) malloc(sizeof(char *) * (words + 1));
	if (calc == NULL)
		return (NULL);

	for (d = 0; d <= len; d++)
	{
		if (str[d] == ' ' || str[d] == '\0')
		{
			if (c)
			{
				end = d;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				calc[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = d;
	}

	calc[k] = NULL;

	return (calc);
}
