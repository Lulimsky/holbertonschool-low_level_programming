#include "lists.h"

/**
 * listint_len -  function that returns
 * the number of elements in a linked list_t list.
 * @h: pointer of a node.
 *
 * Return: length of the linked lists
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
