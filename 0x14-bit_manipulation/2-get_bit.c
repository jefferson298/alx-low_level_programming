#include"main.h"
/**
 * get_bit - a program that returns the value of a bit at a given index.
 * @n: number checked
 * @index: index
 *
 * Return: Bit Value  or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	check = n & div;
	if (check == div)
		return (1);
	return (0);
}
