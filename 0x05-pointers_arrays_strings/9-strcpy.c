#include "main.h"

/**
* _strlen - returns the length of the string
* @s: string
* Return: length
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
*_strcpy - Copies a string pointed to by @src, including the
*           terminating null byte, to a buffer pointed to by @dest.
* @dest: A buffer to copy the string to.
* @src: The source string to copy.
*
* Return: copy of the original source
*/

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}
