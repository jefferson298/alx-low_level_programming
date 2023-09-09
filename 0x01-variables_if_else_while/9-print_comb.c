#include <stdio.h>
/**
 * main - Entry point
 *
 * prints all possible combinations of single-digit numbers
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int nums = '0';

	while (nums <= '9')
	{
		putchar(nums);
		if (nums <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		nums++;
	}
	putchar('\n');
	return (0);
}
