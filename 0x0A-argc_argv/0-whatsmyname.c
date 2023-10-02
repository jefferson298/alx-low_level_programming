#include <stdio.h>
#include "main.h"
/**
 * main - This prints the name of the program
 * @argc: This is the number of arguments
 * @argv: The array of arguments sequencially
 *
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
