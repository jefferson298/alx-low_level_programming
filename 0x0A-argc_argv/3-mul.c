#include <stdio.h>
#include "main.h"

/**
 * _atoi - This converts a string to an integer
 * @s: The given string to be converted
 *
 * Return: This program returns the int converted
 */
int _atoi(char *s)
{
	int c, d, n, len, f, digit;

	c = 0;
	d = 0;
	n = 0;
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
			n = n * 10 + digit;
			f = 1;
			if (s[c + 1] < '0' || s[c + 1] > '9')
				break;
			f = 0;
			}
		c++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - This multiplies two given values
 *
 * @argc: TOTAL number of arguments
 * @argv: TOTAL array of arguments
 *
 * Return: 0 (Success) else 1 (failure)
 */
int main(int argc, char *argv[])
{
	int result, val1, val2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	val1 = _atoi(argv[1]);
	val2 = _atoi(argv[2]);
	result = val1 * val2;

	printf("%d\n", result);

	return (0);
}
