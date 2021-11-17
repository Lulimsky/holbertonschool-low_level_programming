#include "lists.h"
/**
 * insert_nodeint_at_index - Entry Point
 * @head: head
 * @idx: index
 * @n: data
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 0;

	listint_t *sig, *ant;

	if (*head == NULL)
		return (NULL);

	ant = *head;

	while (ant != NULL)
	{
		if (node == idx - 1)
		{
			sig = malloc(sizeof(listint_t));
			if (sig == NULL)
			{
				return (NULL);
			}
			else
			{
				sig->n = n;
				sig->next = ant->next;
				ant->next = sig;
				return (sig);
			}
		}
		if (ant->next != NULL)
			ant = ant->next;
		node++;
	}
	return (NULL);
}
