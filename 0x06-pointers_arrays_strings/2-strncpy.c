#include "main.h"

/**
* _strncpy - copies n bytes of a source into a buffer of destination string
* @dest: copy source to this buffer
* @src: this is the source to copy
* @n: n bytes to be copied
* Return: copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
