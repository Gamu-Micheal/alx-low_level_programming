#include "lists.h"

/**
 * pop_listint - deletes the head of a linkedlist
 * @head: head of the linkedlist
 * Return: the value of the head that was remove
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val;

	if (head == NULL || *head == NULL)
		return (0);
	val = (*head)->n;
	tmp = (*head)->next;

	free(*head);
	*head = tmp;

	return (val);
}
