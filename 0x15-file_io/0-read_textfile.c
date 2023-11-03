#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- A Function that reads text file print to STDOUT.
 *
 * @filename: The text file read
 * @letters: The number total of letters to be read
 * Return: w- actual number of bytes read and printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *k;
	ssize_t x;
	ssize_t g;
	ssize_t t;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	k = malloc(sizeof(char) * letters);
	t = read(x, k, letters);
	g = write(STDOUT_FILENO, k, t);

	free(k);
	close(x);
	return (g);
}
