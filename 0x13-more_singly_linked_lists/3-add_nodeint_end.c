#include "lists.h"

/**
 * add_nodeint_end - add node at end of a linkedlist
 * @head: current head if the linkedlist
 * @n: value of new node
 *
 * Return: new head of the linkedlist
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(*node));
	listint_t *tmp;

	if (node == NULL)
	{
		free(node);
		node = NULL;
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (head == NULL)
	{
		free(node);
		node = NULL;
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = node;

	return (*head);
}
