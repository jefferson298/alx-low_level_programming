#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints the first 50 Fibonacci nums
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int n = 50;
unsigned long long int first = 1;
unsigned long long int second = 2;

printf("%llu, %llu, ", first, second);
for (int i = 3; i <= n; i++)
{
unsigned long long int next = first + second;
if (i < n)
{
printf("%llu, ", next);
}
else
{
printf("%llu\n", next);
}
first = second;
second = next;
}
return (0);
}
