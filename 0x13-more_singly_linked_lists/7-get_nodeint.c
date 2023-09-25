#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at an index
 * @head: first node in the list
 * @index: index node to return
 * Return: point to the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
