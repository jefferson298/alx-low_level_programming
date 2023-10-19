#include <stdio.h>

/**
 * bmain - A function that is executed before main
 *
 * Return: nothing (success)
 *
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
