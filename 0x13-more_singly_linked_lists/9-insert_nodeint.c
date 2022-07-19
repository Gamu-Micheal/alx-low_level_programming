#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at the nth index of a linkedlist
 * @idx: index where the node should be added
 * @n: value of the node to be added
 * @head: the head of the list
 * Return: pointer to the head of the list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = malloc(sizeof(*node));
	unsigned int i = 0;
	listint_t *curr, *prev = NULL;

	if (node == NULL)
	{
		free(node);
		node = NULL;
		return (NULL);
	}
	if (head == NULL)
	{
		free(node);
		node = NULL;
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		return (NULL);
	curr = *head;
	while (i <= j)
	{
		if (i == idx)
		{
			if (prev != NULL)
			{
				node->next = curr;
				prev->next = node;
				return (node);
			}
			node->next = curr;
			*head = node;
			return (node);
		}
		prev = curr;
		i++;
		curr = curr->next;
	}
	return (NULL);
}
