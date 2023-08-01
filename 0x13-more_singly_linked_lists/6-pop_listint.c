#include "lists.h"

/**
 * pop_listint - del head of node
 * @head: pointer for 1st element
 *
 * Return: data deleted || 0 if empty list
 **/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (!head || !*head)
		return (0);
	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (x);
}
