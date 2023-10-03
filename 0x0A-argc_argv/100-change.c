#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - This prints the minimum number of coins to
 * make change for an amount of money
 * @argc: TOTAL number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 (Success) else 1 (failure)
 */
int main(int argc, char *argv[])
{
	int numb, m, output;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numb = atoi(argv[1]);
	output = 0;

	if (numb < 0)
	{
		printf("0\n");
		return (0);
	}

	for (m = 0; m < 5 && numb >= 0; m++)
	{
		while (numb >= coin[m])
		{
			output++;
			numb -= coin[m];
		}
	}
	printf("%d\n", output);
	return (0);
}
