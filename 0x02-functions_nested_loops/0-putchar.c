#include "main.h"
/**
 * main - Entry point
 *
 * Description: program that prints _putchar, followed by a new line
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
int i;
char c[] = "_putchar";

for (i = 0; i <= 7; i++)
{
	_putchar(c[i]);
}
_putchar('\n');
return (0);
}
