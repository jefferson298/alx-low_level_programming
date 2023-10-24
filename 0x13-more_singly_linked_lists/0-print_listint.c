#include "lists.h"
/**
 * print_listint - A function that prints all the elements of a linked list
 * @h: The total blinked list of type listint_t to print
 *
 * Return: The value or number of available nodes
 */
size_t print_listint(const listint_t *h)
{
size_t val = 0;

while (h)
{
printf("%d\n", h->n);
val++;
h = h->next;
}
return (val);
}
