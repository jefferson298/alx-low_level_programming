#include "main.h"
/**
 * reverse_array - Function reverses array of integers
 * @a: array
 * @n: Total number of elements of array
 *
 * Return: nothing
*/
void reverse_array(int *a, int n)
{
	int g;
	int h;

	for (g = 0; g < n--; g++)
	{
		h = a[g];
		a[g] = a[n];
		a[n] = h;
	}
}
