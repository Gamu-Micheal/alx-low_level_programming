#include "lists.h"

/**
 * list_len - returns the length of a linkedlist
 * @h: list_t pointer
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
