#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:
 * This program prints the size of various data types in bytes
 * using the Operator sizing and best formats.
 * Return: 0 (success)
 */
int main(void)
{
#if defined(__x86_64__) || defined(__ppc64__)
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
#else
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
#endif

return (0);
}
