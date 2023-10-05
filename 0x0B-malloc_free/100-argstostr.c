#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of a program
 * @ac: input 1
 * @av: input 2
 * Return: 0 (success)
 */
char *argstostr(int ac, char **av)
{
	int g, h, k = 0, l = 0;
	char *argstr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (g = 0; g < ac; g++)
	{
		for (h = 0; av[g][h]; h++)
			l++;
	}
	l += ac;

	argstr = malloc(sizeof(char) * l + 1);
	if (argstr == NULL)
		return (NULL);
	for (g = 0; g < ac; g++)
	{
	for (h = 0; av[g][h]; h++)
	{
		argstr[k] = av[g][h];
		k++;
	}
	if (argstr[k] == '\0')
	{
		argstr[k++] = '\n';
	}
	}
	return (argstr);
}
