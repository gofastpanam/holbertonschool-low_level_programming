#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer of the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node = *head;
	int len = 0;
	int i;

	if (str == NULL)
	return (NULL);

	while (str[len] != '\0')
	len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = malloc((len + 1) * sizeof(char));
    if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	new_node->str[i] = str[i];
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
	last_node = last_node->next;
	last_node->next = new_node;
	return (new_node);
}
