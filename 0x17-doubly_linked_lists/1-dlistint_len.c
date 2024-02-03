#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer variable to dlistint_t struct
 *
 * Return: number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);

}