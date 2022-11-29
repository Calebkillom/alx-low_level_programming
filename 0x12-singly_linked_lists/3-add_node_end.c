#include "lists.h"

/**
* add_node_end - adds node at end of a list
* @head: node head
* @str: string stored in node
*
* Return: address of new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *addrss, *temp;

	addrss = malloc(sizeof(list_t));

	if (addrss == NULL)
		return (NULL);

	addrss->str = strdup(str);

	if (addrss->str == NULL)
	{
		free(addrss);
		return (NULL);
	}
	addrss->len = strlen_(addrss->str);
	addrss->next = NULL;

	if (*head == NULL)
	{
		*head = addrss;
		return (addrss);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = addrss;

	return (addrss);
}
