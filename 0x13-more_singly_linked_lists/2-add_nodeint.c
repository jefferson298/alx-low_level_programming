#include "lists.h"
/**
 * add_nodeint - A Function that adds a new node at
 * the beginning of a linked list
 * @head: A given pointer to the first node in the list
 * @n: Required data to insert in the new node
 *
 * Return: A pointer to the available new node, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;
return (new);
}
