#include "main.h"
/**
 * _islower - lowercase and uppercase letters
 *
 * Description: prints using _putchar
 *@c: gather the alphabets
 * Return: (1) if c is lower, if not (0)
 *
 */
int _islower(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			low = 1;
		}
	}
	return (low);
}
