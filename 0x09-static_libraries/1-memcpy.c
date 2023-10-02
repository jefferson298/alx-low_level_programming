#include "main.h"
/**
 *_memcpy - A function that copies memory area
 *@dest: memory storage
 *@src: memory where is duplicated
 *@n: number of bytes
 *
 *Return: The duplicated memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int g = 0;
	int i = n;

	for (; g < i; g++)
	{
		dest[g] = src[g];
		n--;
	}
	return (dest);
}
