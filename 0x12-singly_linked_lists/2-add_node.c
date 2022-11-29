#include "lists.h"

/**
* strlen_ - finds length of string
* @str: string whose length is to be found
*
* Return: length of string
*/

int strlen_(char *str)
{
	unsigned int i = 0;

	while (*(str + i) != '\0')
		i++;

	return (i);
}

/**
* add_node - adds node to front of the list
* @head: head node
* @str: string
*
* Return: address of new element
*/

list_t *add_node(list_t **head, const char *str)
{
	char *string;
	list_t *temp;

	string = strdup(str);
	temp  = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = string;

	if ((temp->str) == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen_(temp->str);
	temp->next = *head;

	*head = temp;
	return (temp);
}
