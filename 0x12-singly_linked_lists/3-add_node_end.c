#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end -  function that adds a new node
 * at the end of a list_t list.
 *
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: a pointer to a last and new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *node, *tail;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	node->str = dup;
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
		*head = node;

	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = node;
	}

	return (*head);
}
