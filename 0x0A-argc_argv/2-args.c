#include <stdio.h>
#include "main.h"

/**
 * main - This program prints all arguments it takes in
 * @argc: The total number of arguments
 * @argv: The total array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}

	return (0);
}
