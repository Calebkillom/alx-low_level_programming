#include "main.h"

/**
* _isalpha - checks if alphabet
* @c: character to check
* Return: 1 if letter, 0 if otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
