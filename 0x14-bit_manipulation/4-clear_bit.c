#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - A function that sets the value of a bit to 0 at an index
 * @n: given para
 * @index: index value
 * Return: 1 (success) or -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
