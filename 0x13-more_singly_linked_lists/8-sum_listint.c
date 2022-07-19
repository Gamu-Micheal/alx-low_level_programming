#include "lists.h"

/**
 * sum_listint - return the sum of all nodes value
 * @head: Head of the linkedlist
 *
 * Return: sum of all node values
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
