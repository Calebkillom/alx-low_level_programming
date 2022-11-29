#include "lists.h"

/**
* list_len - returns number of elements in linked list
* @h: pointer to the list
*
* Return: number of list elements
*/

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
