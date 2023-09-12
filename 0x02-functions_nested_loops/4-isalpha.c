#include "main.h"
/**
 * _isalpha - return 1 when c is upper or lower
 *
 * Description: print using _putchar
 *
 * @c: get the character
 *
 * Return: 1 if c is upper or lower, if not 0
 *
 */
int _isalpha(int c)
{
	char low, upper;
	int alph = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (low == c || upper == c)
			{
				alph = 1;
			}
		}
	}
	return (alph);
}
