#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - A Function that Counts the number of unique nodes
 * in a given looped listint_t linked list.
 *
 * @head: A given pointer to the head of the listint_t to be checked
 *
 * Return: 0 (success)
 *
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *game, *pad;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

game = head->next;
pad = (head->next)->next;

while (hare)
{
if (game == pad)
{
game = head;
while (game != pad)
{
nodes++;
game = game->next;
pad = pad->next;
}

game = game->next;
while (game != pad)
{
nodes++;
game = game->next;
}

return (nodes);
}

game = game->next;
pad = (pad->next)->next;
}

return (0);
}

/**
 * print_listint_safe - A function that Prints a listint_t list safely.
 * @head: A given pointer to the head of the listint_t list.
 *
 * Return: The given number value of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}
