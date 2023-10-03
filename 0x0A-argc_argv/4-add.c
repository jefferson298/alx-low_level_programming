#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - This confirms there are digits on the string
 * @str: The array str
 *
 * Return: 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - This Prints the program name
 * @argc: It Counts arguments
 * @argv: Given Arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int numb;
	int str_to_int;
	int sum = 0;

	numb = 1;
	while (numb < argc)
	{
		if (check_num(argv[numb]))

		{
			str_to_int = atoi(argv[numb]);
			sum += str_to_int;
		}

		/*Next step if any one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		numb++;
	}

	printf("%d\n", sum);

	return (0);
}
