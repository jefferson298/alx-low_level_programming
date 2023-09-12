#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 *@b: the value declared
 * Description: The standard lib provides a similar function
 *
 * Return: 0 (success)
 *
 */
int _abs(int b)
{
	if (b >= 0)
		return (b);
	else
		return (b * -1);
}
