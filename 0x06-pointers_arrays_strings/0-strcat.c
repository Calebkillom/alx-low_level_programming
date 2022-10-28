#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: string to be appended to
* @src: string to append
* Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
