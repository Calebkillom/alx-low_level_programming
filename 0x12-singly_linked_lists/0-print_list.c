#include "lists.h"

/**
* print_list - function that prints all elements of a list
* @h: pointer to next node
*
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	for (; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (i);
}
