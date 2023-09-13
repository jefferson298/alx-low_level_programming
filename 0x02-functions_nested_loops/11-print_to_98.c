#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers from n to 98.
 * @n: The starting number.
 *
 * Description: This function prints all natural numbers from n to 98,
 * separated by a comma and a space, in ascending order. The numbers are
 * followed by a new line. If n is greater than 98, it counts down to 98.
 */
void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
printf("\n");
}
