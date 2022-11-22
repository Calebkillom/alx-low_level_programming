#include "main.h"

/**
* _memset - fills memory with a constant byte
*
* @s: pointer to memory area to fill
* @n: the number of bytes to fill
* @b: constant byte
*
* Return: a pointer to the memory area @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}
	return (s);
}
