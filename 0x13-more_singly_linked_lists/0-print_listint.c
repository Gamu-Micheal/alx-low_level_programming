#include "lists.h"

/**
 * print_listint - prints all nodes of a linkedlist
 * @h: head of the list
 * Return: number of node printed
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
