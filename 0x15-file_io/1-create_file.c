#include "main.h"
/**
 * create_file - A function that creates a file.
 *
 * @filename: This points to a file to be created.
 *
 * @text_content: A string pointer
 *
 * Return:  - -1. if the pointer failselse - 1
 */

int create_file(const char *filename, char *text_content)
{
	int k, g, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	k = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	g = write(k, text_content, len);

	if (k == -1 || g == -1)
		return (-1);

	close(k);

	return (1);
}
