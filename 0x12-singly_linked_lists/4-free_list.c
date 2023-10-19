#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - A function that frees a list.
 * @head: List entry
 *
 */
void free_list(list_t *head)
{
list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}
