#include "lists.h"
/**
 * free_listint_safe - A function that frees a linked list
 * @h: An Auxillary pointer
 *
 * Return: The total number of elements in the list that is freed
 *
 */
size_t free_listint_safe(listint_t **h)
{
size_t k = 0;
int diff;
listint_t *temp;

if (!h || !*h)
return (0);

while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
k++;
}
else
{
free(*h);
*h = NULL;
k++;
break;
}
}

*h = NULL;
return (k);
}
