#include "main.h"

/**
 * get_endianness - A function that checks the endianness accurately
 *
 * Return: 0 (success) if endian is big or  1 if endian is small
 */
int get_endianness(void)
{
	int j;
	char *b;

	j = 1;
	b = (char *)&j;
	return (*b);
}
