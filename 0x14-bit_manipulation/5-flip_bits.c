#include "main.h"
/**
 * flip_bits - A Function that counts the number of bits to change
 * to get from one number to another given
 * @n: ist value
 * @m: 2nd Value
 *
 * Return: Total num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (d = 63; a >= 0; d--)
	{
		current = exclusive >> d;
		if (current & 1)
			countbit++;
	}
	return (countbit);
}
