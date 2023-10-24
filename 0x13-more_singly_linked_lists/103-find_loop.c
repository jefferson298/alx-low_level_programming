#include "lists.h"
/**
 * find_listint_loop - A Function finds the loop in a given linked list
 *
 * @head: The required linked list to search.
 *
 * Return: address of the node else NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *pause = head;
listint_t *contin = head;

if (!head)
return (NULL);

while (pause && contin && contin->next)
{
contin = contin->next->next;
pause = pause->next;
if (contin == pause)
{
pause = head;
while (pause != contin)
{
pause = pause->next;
contin = contin->next;
}
return (contin);
}
}
return (NULL);
}
