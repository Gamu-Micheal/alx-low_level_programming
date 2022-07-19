#include "lists.h"

/**
 * free_listint - frees all memory used by a linkedlist
 * @head: head of the list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *tmp = head->next;

		free(head);
		head = tmp;
	}
}
