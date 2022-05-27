#include "lists.h"

/**
 * pop_listint - Function that deletes the head nodo
 * @head: head node
 *
 * Return: head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int dat;

	if (!*head)
		return (0);

	dat = (*head)->n;
	*head = new->next;
	free(new);
	return (dat);
}
