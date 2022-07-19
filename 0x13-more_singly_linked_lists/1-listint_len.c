#include "lists.h"

/**
 * listint_len - returns the total number of nodes in a linkedlist
 * @h: head of the list
 * Return: integer
 */


size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
