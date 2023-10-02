#include "main.h"

/**
 * _isalpha - This checks for alphabetic character
 * @c: exact character to be checked
 * Return: This returns 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
