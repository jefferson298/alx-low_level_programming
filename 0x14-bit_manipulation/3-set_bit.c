#include "main.h"
/**
 * set_bit - A program that sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index at which to set
 *
 * Return: 1 (success) or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int make;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	make = 1 << index;
	*n = *n | make;
	return (1);
}
