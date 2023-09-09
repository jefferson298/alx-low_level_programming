#include <stdio.h>
/**
 * main - Entry point
 *
 *  prints all the numbers of base 16 in lowercase
 *
 *  Return: 0 (success)
 *
 */
int main(void)
{
	char nums = '0';
	char letters = 'a';

	while (nums <= '9')
	{
		putchar(nums);
		nums++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
