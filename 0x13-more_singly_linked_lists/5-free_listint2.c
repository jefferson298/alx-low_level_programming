#include "lists.h"
/**
 * free_listint2 - A function that frees a linked list
 * @head: The pointer to the freed list
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}

*head = NULL;
}
