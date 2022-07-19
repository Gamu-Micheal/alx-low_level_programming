#include "lists.h"

/**
 * add_nodeint - add node at beginning of a linkedlist
 * @head: current head if the linkedlist
 * @n: value of new node
 *
 * Return: new head of the linkedlist
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(*node));

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

	node->next = *head;
	*head = node;

	return (*head);
}
