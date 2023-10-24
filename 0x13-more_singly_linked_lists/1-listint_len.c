#include "lists.h"

/**
 * listint_len - A Function that returns the num of elements in a linked lists
 * @h: The linked list of type listint_t to traverse
 *
 * Return: The Value  of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t val = 0;

while (h)
{
val++;
h = h->next;
}
return (val);
}
