#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes
 * a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: An index of the node to be deleted
 *
 * Return: 1 (Success), or -1 (Failed or invalid)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int d = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (d < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
d++;
}
current = temp->next;
temp->next = current->next;
free(current);
return (1);
}
