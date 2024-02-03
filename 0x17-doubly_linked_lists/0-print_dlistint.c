#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to dlistint_t
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *temp;

	temp = h;
	count = 0;

	while (temp != NULL)
	{
		printf("%d", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
