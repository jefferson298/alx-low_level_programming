#include "lists.h"
/**
 * free_listint - A Function that frees a linked list
 * @head: The required list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
