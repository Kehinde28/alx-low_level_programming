#include "lists.h"

/**
 * sum_listint - calculates the sum of data
 * @head: first node in the link
 * Return: result  sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
