#include "main.h"

/**
* string_toupper - capitalize all letters in a string
* @s: string to manipulate
* Return: string with all letters capitalized
*/

char *string_toupper(char *s)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
