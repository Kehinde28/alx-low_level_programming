#include "lists.h"

/**
 * reverse_listint - reverses link
 * @head: point to the first node
 * Return: point to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NIL;
	listint_t *next = NIL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
