#include <unistd.h>
/**
 * main
 *
 * Description:
 * Writes the message
 * "and that piece of art is useful" - Dora Korpar, 2015-10-19
 * continued by a newline to the standard error (stderr) and returns 1.
 *
 * Return: 1 (indicating execution)
 */
int main(void)
{
ssize_t len = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1;
ssize_t bytes_written = write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);
if (bytes_written == len)
return (1);
else
return (0);
}
