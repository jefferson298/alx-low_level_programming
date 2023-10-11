#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array
 * @array: The array
 * @size: size to print
 * @action: The pointer to print
 *
 * Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int g;

	if (array == NULL || action == NULL)
		return;

	for (g = 0; g < size; g++)
	{
		action(array[g]);
	}
}
