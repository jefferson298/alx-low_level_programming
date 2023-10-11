#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This returns the sum of two numbers.
 * @a: num1
 * @b: num2
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This Returns the difference of two numbers.
 * @a: num1
 * @b: num2
 *
 * Return: Difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This Returns the product of two numbers.
 * @a: num1
 * @b: num2
 *
 * Return: The product of a and b.
 *
 */
int op_mul(int a, int b)
	{
	return (a * b);
}
/**
 * op_div - This returns the division of two numbers.
 * @a: num1
 * @b: num2
 *
 * Return: The final quotient of a and b.
 *
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - This returns the remainder of the division of two numbers.
 * @a: num1
 * @b: num2
 *
 * Return: The Final remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
