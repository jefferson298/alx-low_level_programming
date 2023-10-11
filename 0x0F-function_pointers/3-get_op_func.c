#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - picks out the correct function to perform the users choice
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int z = 0;

	while (ops[z].op != NULL && *(ops[z].op) != *s)
		z++;

	return (ops[z].f);
}
