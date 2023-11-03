#include "main.h"
/**
 * append_text_to_file - A function that
 * appends text at a files end.
 *
 * @filename: The given filename
 *
 * @text_content: A String
 *
 * Return: If the function fails or filename is NULL - -1 else - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int l, k, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	l = open(filename, O_WRONLY | O_APPEND);
	k = write(l, text_content, len);

	if (l == -1 || k == -1)
		return (-1);

	close(l);

	return (1);
}
