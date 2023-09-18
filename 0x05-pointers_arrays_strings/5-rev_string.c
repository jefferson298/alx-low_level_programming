#inclde "main.h"
/**
 * rev_string - function that reverses a string
 * @s: The string to be reversed
 *
 * Return: the reversed string
 */
void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int b;

	while (s[count] != '\0')
		count++;
	for (b = 0; b < count; b++)
	{
		count--;
		rev = s[b];
		s[b] = s[count];
		s[count] = rev;
	}
}
