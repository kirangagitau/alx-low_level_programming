#include "lists.h"

/**
 * sum_listint -gets sum of elements
 * @head: first node
 *
 * Return: calculated sum
 **/
int sum_listint(listint_t *head)
{
	int ans = 0;
	listint_t *temp = head;

	while (temp)
	{
		ans += temp->n;
		temp = temp->next;
	}
	return (ans);
}
