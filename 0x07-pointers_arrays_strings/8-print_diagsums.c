#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: First input..
 * @size: Second input.
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int g, h, i;

	g = 0;
	h = 0;

	for (i = 0; i < size; i++)
	{
		g = g + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		h += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", g, h);
}
