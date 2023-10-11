#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that prints name using pointer to function
 * @name: A String
 * @f: string 2
 *
 * Return: nothing
 *
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
