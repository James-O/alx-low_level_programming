#include "lists.h"

/**
 * free_listint2 - Funtions that free a list head = NULL
 *
 * @head: pointer
 *
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
		return;
	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
