#include "main.h"

/**
* _islower - checks for lowercase
* @c: character to check
* Return: 0 if uppercase, 1 if lowercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
