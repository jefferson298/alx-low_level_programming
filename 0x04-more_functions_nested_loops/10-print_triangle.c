#include "main.h"
/**
 * print_triangle -  function that prints a triangle
 *
 * @size: size of the triangle
 * if size is 0 or less, print only a new line
 * Use the character # to print the triangle
 */
void print_triangle(int size)
{
	int tag, tri;

	if (size > 0)
	{
		for (tag = 1; tag <= size; tag++)
		{
			for (tri = size - tag; tri > 0; tri--)
			{
				_putchar(' ');
			}
			for (tri = 0; tri < tag; tri++)
			{
				_putchar('#');
			}
			if (tag == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
}
