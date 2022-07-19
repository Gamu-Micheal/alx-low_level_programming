#include "lists.h"

/**
 * free_listint2 - frees all memory used by a linkedlist
 * @head: head of the list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp1;

	if (head == NULL)
	{
		head = NULL;
		return;
	}

	if (*head == NULL)
	{
		*head = NULL;
		return;
	}

	tmp1 = *head;

	while (tmp1 != NULL)
	{
		listint_t *tmp = tmp1->next;

		free(tmp1);
		tmp1 = tmp;
	}

	*head = NULL;
}
