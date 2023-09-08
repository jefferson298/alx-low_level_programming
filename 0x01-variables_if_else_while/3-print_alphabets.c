#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints Alphabets in both upper and lower cases
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while
		(lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	} while
		(uppercase <= 'Z');
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
