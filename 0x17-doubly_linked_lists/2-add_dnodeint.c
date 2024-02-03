#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: pointer that point to pointer to dlistint_t
 * @n: the integer to be inserted
 *
 * Return: address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		temp->next = *head;
		temp->prev = NULL;
		*head = temp;
	}

	return (temp);

}
