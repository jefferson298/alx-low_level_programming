#include "lists.h"
/**
 * get_nodeint_at_index -  This returns the nth node of a listint_t linked list
 *
 * @head: This is the first node in the linked list
 *
 * @index: The index of the node to return
 *
 * Return: The given pointer to the node else null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int k = 0;
listint_t *temp = head;

while (temp && k < index)
{
temp = temp->next;
k++;
}

return (temp ? temp : NULL);
}
