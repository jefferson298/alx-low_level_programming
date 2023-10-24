#include "lists.h"
/**
 * pop_listint - A function that deletes the head node of a linked list
 * @head: The pointer to the first element in the linked list
 *
 * Return: Element data 0 (if empty)
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int val;

if (!head || !*head)
return (0);

val = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (val);
}
