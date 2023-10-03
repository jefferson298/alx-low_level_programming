#include <stdio.h>
#include "main.h"

/**
 * main - This prints the number of arguments initiated
 * @argc: The given number of arguments
 * @argv: All the array of given arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
