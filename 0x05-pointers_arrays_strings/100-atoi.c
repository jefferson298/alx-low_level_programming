#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: The string to be converted
 *
 * Return: what is  converted from the string
 */
int _atoi(char *s)
{
	int c, d, e, len, f, digit;

	c = 0;
	d = 0;
	e = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (c < len && f == 0)
	{
		if (s[c] == '-')
			++d;

		if (s[c] >= '0' && s[c] <= '9')
		{
			digit = s[c] - '0';
			if (d % 2)
				digit = -digit;
			e = e * 10 + digit;
			f = 1;
			if (s[c + 1] < '0' || s[c + 1] > '9')
				break;
			f = 0;
		}
		c++;
	}

	if (f == 0)
		return (0);

	return (e);
}
