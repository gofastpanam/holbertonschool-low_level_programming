#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlisint_t list
 * @head: pointer to the pointer of the head of the list
 * @n: number to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
	temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
