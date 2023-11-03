#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Buffer allocation of 1024 bytes
 * @file: file name chars storage
 *
 * Return: The pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - file descriptor closure
 *
 * @fd: The descriptor file to be closed
 *
 */
void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - file content copier
 *
 * @argc: Total number of arguements supplied
 *
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 (success)
 *
 * Description: incorrect arguement code - exit code 97.
 *              File Inexistence - exit code 98.
 *              If The file_to cannot be created or written to - exit code 99.
 *              If The file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int pro, got, z, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	pro = open(argv[1], O_RDONLY);
	z = read(pro, buffer, 1024);
	got = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (pro == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(got, buffer, z);
		if (got == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		z = read(pro, buffer, 1024);
		got = open(argv[2], O_WRONLY | O_APPEND);

	} while (z > 0);

	free(buffer);
	close_file(pro);
	close_file(got);

	return (0);
}
