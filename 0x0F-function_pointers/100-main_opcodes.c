#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Total number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, d;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (d = 0; d < bytes; d++)
	{
		if (d == bytes - 1)
		{
			printf("%02hhx\n", arr[d]);
			break;
		}
		printf("%02hhx ", arr[d]);
	}
	return (0);
}
