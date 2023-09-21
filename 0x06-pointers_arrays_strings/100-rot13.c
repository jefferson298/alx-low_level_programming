#include "main.h"hhhhhhhhhhhe  h
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13.
 * @s: The pointer to the string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int a;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[a] == data1[j])
			{
				s[a] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
