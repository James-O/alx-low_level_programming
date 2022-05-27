#include "lists.h"

/**
 * get_nodeint_at_index - Function return nth of the list
 * @head: head nodes
 * @index: index of the nodo
 * Return: list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int a;

	if (!head)
		return (0);
	for (a = 0; new; a++)
	{
		if (a == index)
			return (new);
		new = new->next;
	}
	return (NULL);
}
