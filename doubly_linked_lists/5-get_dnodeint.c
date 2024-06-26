#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t list
* @head: pointer to the head of the list
* @index: index of the node
* Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	return (NULL);

	while (head != NULL)
	{
		if (i == index)
		return (head);

		i++;
		head = head->next;
	}
	return (NULL);
}
