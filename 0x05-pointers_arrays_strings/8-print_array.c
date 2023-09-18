#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * followed by a new line.
 * @a: The name of the array
 * @n: The number of elements of the array to be printed
 *
 * Return: a and n
 */
void print_array(int *a, int n)
{
	int g;

	for (g = 0; g < (n - 1); g++)
	{
		printf("%d, ", a[g]);
	}
		if (g == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

