#include "main.h"
/**
 * _strstr - function finds the first occurrence of the substring needle
 * n the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: First string
 * @needle: second string
 * Return: 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *k = needle;

		while (*j == *k && *k != '\0')
		{
			j++;
			k++;
		}

		if (*k == '\0')
			return (haystack);
	}
	return (0);
}
