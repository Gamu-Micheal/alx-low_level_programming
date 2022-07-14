#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all nodes of a linkedlist
 * @h: list_t
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			cnt++;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		cnt++;
	h = h->next;
	}

	return (cnt);
}
