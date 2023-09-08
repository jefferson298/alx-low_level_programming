#include <unistd.h>
/**
 * main - writing a long message without  printf or put
 *
 * Return: 1 (indicating execution)
 *
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
