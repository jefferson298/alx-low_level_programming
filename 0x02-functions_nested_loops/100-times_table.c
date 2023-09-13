#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of times to calculate the table (0 <= n <= 15).
 *
 * Description: This function prints the times table for n, starting with 0.
 * Checks if n is within the valid range (0 to 15) before printing the table.
 * The table is formatted with each element separated by a comma and space.
 */
void print_times_table(int n)
{
	int result, i, j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			/* Adjust spacing based on the result*/
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');
				if (result < 100)
					_putchar(' ');
			}

			/* Print the result*/
			if (result >= 100)
				_putchar(result / 100 + '0');
			if (result >= 10)
				_putchar((result / 10) % 10 + '0');
			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}
